(**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

module PositionedSyntaxTree : sig
  include module type of
      Full_fidelity_syntax_tree.WithSyntax (Full_fidelity_positioned_syntax)
end

(** Various information associated with a given file.

It's important to create an [entry] when processing data about a single file for
two reasons:

  - To ensure that subsequent operations on the same file have a consistent view
    of the same file. That is, they won't read the file from disk twice and
    potentially introduce a race condition.
  - To ensure that subsequent operations on the same file don't recalculate the
    same data (such as an AST). This is important for performance, particularly
    for IDE operation latency.

To create a new entry for a file, use [Provider_utils.update_context].

There should generally be no more than one or two entries inside the
[Provider_context.t] at a given time. Be careful not to try to store every
single file's data in memory at once. Once you're done processing a file (e.g.
you have the TAST and don't need to access further data), then you should
discard the [entry] and the [Provider_context.t] that it came from.
*)
type entry = {
  file_input: ServerCommandTypes.file_input;
  path: Relative_path.t;
  source_text: Full_fidelity_source_text.t;
  comments: Parser_return.comments;
  ast: Nast.program;
  ast_errors: Errors.t;
  mutable cst: PositionedSyntaxTree.t option;
  mutable tast: Tast.program option;
  mutable tast_errors: Errors.t option;
  mutable symbols: Relative_path.t SymbolOccurrence.t list option;
}

(** A context allowing the caller access to data for files and symbols in the
codebase. In particular, this is used as a parameter to [Decl_provider]
functions to access the decl for a given symbol.

Depending on the [backend] setting, data may be cached in local memory, in
shared memory, out of process, etc.

You can examine an individual file in the codebase by constructing an [entry]
for it. For example, you can call [Provider_utils.update_context] to create a
new [entry], and then [Provider_utils.compute_tast_and_errors_unquarantined].

Some operations may make changes to global state (e.g. write to shared memory
heaps). To ensure that no changes escape the scope of your operation, use
[Provider_utils.respect_but_quarantine_unsaved_changes]. *)
type t = {
  tcopt: TypecheckerOptions.t;
  backend: Provider_backend.t;
  entries: entry Relative_path.Map.t;
}

(** The empty context, for use at the top-level of stand-alone tools which don't
have a [ServerEnv.env].

If you have a [ServerEnv.env], you probably want to use
[Provider_utils.ctx_from_server_env] instead. *)
val empty_for_tool :
  tcopt:TypecheckerOptions.t -> backend:Provider_backend.t -> t

(** The empty context, for use with Multiworker workers. This assumes that the
backend is shared memory. We don't want to serialize and send the entire
[ServerEnv.env] to these workers because a [ServerEnv.env] contains large data
objects (such as the forward naming table). *)
val empty_for_worker : tcopt:TypecheckerOptions.t -> t

(** The empty context, for use in tests, where there may not be a
[ServerEnv.env] available. *)
val empty_for_test : tcopt:TypecheckerOptions.t -> t

(** The empty context, for use in debugging aides in production code, where
there may not be a [ServerEnv.env] available. *)
val empty_for_debugging : tcopt:TypecheckerOptions.t -> t

(** Update the [TypecheckerOptions.t] contained within the [t]. *)
val map_tcopt : t -> f:(TypecheckerOptions.t -> TypecheckerOptions.t) -> t

(** Returns a [ServerCommandTypes.file_input] corresponding to the given [path].

If the [path] is in the context, returns its associated
[ServerCommandTypes.FileContent]. Otherwise returns the
[ServerCommandTypes.FileName] corresponding to that file on disk. *)
val get_file_input :
  ctx:t -> path:Relative_path.t -> ServerCommandTypes.file_input

(** Get the [FileInfo.t] associated with the given [entry]. *)
val get_fileinfo : entry:entry -> FileInfo.t

(** Get the current global context (which is set with
[Provider_utils.respect_but_quarantine_unsaved_changes]), if any. Only one
global context can be set at a time. *)
val get_global_context : unit -> t option

(** Internal functions **)

(** Set the current global context. Should not be used directly; use
[Provider_utils.respect_but_quarantine_unsaved_changes] instead. *)
val set_global_context_internal : t -> unit

(** Unset the current global context. Should not be used directly; use
[Provider_utils.respect_but_quarantine_unsaved_changes] instead. *)
val unset_global_context_internal : unit -> unit

(** Telemetry for a provider_context includes the current cache state of its backend,
plus 'counters' like how many times cache has been read or evicted. *)
val get_telemetry : t -> Telemetry.t -> Telemetry.t

(** This function resets the 'counters' associated with telemetry. *)
val reset_telemetry : t -> unit
