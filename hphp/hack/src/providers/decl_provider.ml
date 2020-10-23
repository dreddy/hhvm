(*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Hh_prelude
module Class = Typing_classes_heap.Api

type fun_key = string

type class_key = string

type record_def_key = string

type typedef_key = string

type gconst_key = string

type fun_decl = Typing_defs.fun_elt

type class_decl = Typing_classes_heap.Api.t

type record_def_decl = Typing_defs.record_def_type

type typedef_decl = Typing_defs.typedef_type

type gconst_decl = Typing_defs.decl_ty

let prepare_for_typecheck
    (ctx : Provider_context.t) (path : Relative_path.t) (content : string) :
    unit =
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory
  | Provider_backend.Local_memory _ ->
    ()
  (* When using the decl service, before typechecking the file, populate our
     decl caches with the symbols declared within that file. If we leave this to
     the decl service, then in longer files, the decls declared later in the
     file may be evicted by the time we attempt to typecheck them, forcing the
     decl service to re-parse the file. This can lead to many re-parses in
     extreme cases. *)
  | Provider_backend.Decl_service { decl; _ } ->
    Decl_service_client.parse_and_cache_decls_in decl path content

let get_fun (ctx : Provider_context.t) (fun_name : fun_key) : fun_decl option =
  Counters.count Counters.Category.Decling @@ fun () ->
  Decl_counters.count_decl Decl_counters.Fun fun_name @@ fun _counter ->
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory ->
    (match Typing_heap.Funs.get fun_name with
    | Some c -> Some c
    | None ->
      (match Naming_provider.get_fun_path ctx fun_name with
      | Some filename ->
        let ft =
          Errors.run_in_decl_mode filename (fun () ->
              Decl.declare_fun_in_file ~write_shmem:true ctx filename fun_name)
        in
        Some ft
      | None -> None))
  | Provider_backend.Local_memory { Provider_backend.decl_cache; _ } ->
    Provider_backend.Decl_cache.find_or_add
      decl_cache
      ~key:(Provider_backend.Decl_cache_entry.Fun_decl fun_name)
      ~default:(fun () ->
        match Naming_provider.get_fun_path ctx fun_name with
        | Some filename ->
          let ft =
            Errors.run_in_decl_mode filename (fun () ->
                Decl.declare_fun_in_file
                  ~write_shmem:false
                  ctx
                  filename
                  fun_name)
          in
          Some ft
        | None -> None)
  | Provider_backend.Decl_service { decl; _ } ->
    Decl_service_client.rpc_get_fun decl fun_name

let get_class (ctx : Provider_context.t) (class_name : class_key) :
    class_decl option =
  Counters.count Counters.Category.Decling @@ fun () ->
  Decl_counters.count_decl Decl_counters.Class class_name @@ fun counter ->
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory ->
    Typing_classes_heap.Classes.get ctx counter class_name
  | Provider_backend.Local_memory { Provider_backend.decl_cache; _ } ->
    let result : Obj.t option =
      Provider_backend.Decl_cache.find_or_add
        decl_cache
        ~key:(Provider_backend.Decl_cache_entry.Class_decl class_name)
        ~default:(fun () ->
          let result : class_decl option =
            Typing_classes_heap.Classes.get_no_local_cache
              ctx
              counter
              class_name
          in
          Option.map result ~f:Obj.repr)
    in
    let result : class_decl option = Option.map result ~f:Obj.obj in
    result
  | Provider_backend.Decl_service _ ->
    (* The decl service caches shallow decls, so we communicate with it in
       Shallow_classes_provider. Typing_lazy_heap lazily folds shallow decls to
       provide a folded-decl API.  *)
    Typing_classes_heap.Classes.get ctx counter class_name

let get_typedef (ctx : Provider_context.t) (typedef_name : string) :
    typedef_decl option =
  Counters.count Counters.Category.Decling @@ fun () ->
  Decl_counters.count_decl Decl_counters.Typedef typedef_name @@ fun _counter ->
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory ->
    (match Typing_heap.Typedefs.get typedef_name with
    | Some c -> Some c
    | None ->
      (match Naming_provider.get_typedef_path ctx typedef_name with
      | Some filename ->
        let tdecl =
          Errors.run_in_decl_mode filename (fun () ->
              Decl.declare_typedef_in_file
                ~write_shmem:true
                ctx
                filename
                typedef_name)
        in
        Some tdecl
      | None -> None))
  | Provider_backend.Local_memory { Provider_backend.decl_cache; _ } ->
    Provider_backend.Decl_cache.find_or_add
      decl_cache
      ~key:(Provider_backend.Decl_cache_entry.Typedef_decl typedef_name)
      ~default:(fun () ->
        match Naming_provider.get_typedef_path ctx typedef_name with
        | Some filename ->
          let tdecl =
            Errors.run_in_decl_mode filename (fun () ->
                Decl.declare_typedef_in_file
                  ~write_shmem:false
                  ctx
                  filename
                  typedef_name)
          in
          Some tdecl
        | None -> None)
  | Provider_backend.Decl_service { decl; _ } ->
    Decl_service_client.rpc_get_typedef decl typedef_name

let get_record_def (ctx : Provider_context.t) (record_name : string) :
    record_def_decl option =
  Counters.count Counters.Category.Decling @@ fun () ->
  Decl_counters.count_decl Decl_counters.Record_def record_name
  @@ fun _counter ->
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory ->
    (match Typing_heap.RecordDefs.get record_name with
    | Some c -> Some c
    | None ->
      (match Naming_provider.get_record_def_path ctx record_name with
      | Some filename ->
        let tdecl =
          Errors.run_in_decl_mode filename (fun () ->
              Decl.declare_record_def_in_file
                ~write_shmem:true
                ctx
                filename
                record_name)
        in
        Some tdecl
      | None -> None))
  | Provider_backend.Local_memory { Provider_backend.decl_cache; _ } ->
    Provider_backend.Decl_cache.find_or_add
      decl_cache
      ~key:(Provider_backend.Decl_cache_entry.Record_decl record_name)
      ~default:(fun () ->
        match Naming_provider.get_record_def_path ctx record_name with
        | Some filename ->
          let rdecl =
            Errors.run_in_decl_mode filename (fun () ->
                Decl.declare_record_def_in_file
                  ~write_shmem:false
                  ctx
                  filename
                  record_name)
          in
          Some rdecl
        | None -> None)
  | Provider_backend.Decl_service { decl; _ } ->
    Decl_service_client.rpc_get_record_def decl record_name

let get_gconst (ctx : Provider_context.t) (gconst_name : string) :
    gconst_decl option =
  Counters.count Counters.Category.Decling @@ fun () ->
  Decl_counters.count_decl Decl_counters.GConst gconst_name @@ fun _counter ->
  match Provider_context.get_backend ctx with
  | Provider_backend.Shared_memory ->
    (match Typing_heap.GConsts.get gconst_name with
    | Some c -> Some c
    | None ->
      (match Naming_provider.get_const_path ctx gconst_name with
      | Some filename ->
        let gconst =
          Errors.run_in_decl_mode filename (fun () ->
              Decl.declare_const_in_file
                ~write_shmem:true
                ctx
                filename
                gconst_name)
        in
        Some gconst
      | None -> None))
  | Provider_backend.Local_memory { Provider_backend.decl_cache; _ } ->
    Provider_backend.Decl_cache.find_or_add
      decl_cache
      ~key:(Provider_backend.Decl_cache_entry.Gconst_decl gconst_name)
      ~default:(fun () ->
        match Naming_provider.get_const_path ctx gconst_name with
        | Some filename ->
          let gconst =
            Errors.run_in_decl_mode filename (fun () ->
                Decl.declare_const_in_file
                  ~write_shmem:false
                  ctx
                  filename
                  gconst_name)
          in
          Some gconst
        | None -> None)
  | Provider_backend.Decl_service { decl; _ } ->
    Decl_service_client.rpc_get_gconst decl gconst_name

let local_changes_push_sharedmem_stack () : unit =
  Decl_heap.Funs.LocalChanges.push_stack ();
  Decl_heap.RecordDefs.LocalChanges.push_stack ();
  Decl_heap.Constructors.LocalChanges.push_stack ();
  Decl_heap.Props.LocalChanges.push_stack ();
  Decl_heap.StaticProps.LocalChanges.push_stack ();
  Decl_heap.Methods.LocalChanges.push_stack ();
  Decl_heap.StaticMethods.LocalChanges.push_stack ();
  Decl_heap.Classes.LocalChanges.push_stack ();
  Decl_heap.Typedefs.LocalChanges.push_stack ();
  Decl_heap.GConsts.LocalChanges.push_stack ();
  ()

let local_changes_pop_sharedmem_stack () : unit =
  Decl_heap.Funs.LocalChanges.pop_stack ();
  Decl_heap.RecordDefs.LocalChanges.pop_stack ();
  Decl_heap.Constructors.LocalChanges.pop_stack ();
  Decl_heap.Props.LocalChanges.pop_stack ();
  Decl_heap.StaticProps.LocalChanges.pop_stack ();
  Decl_heap.Methods.LocalChanges.pop_stack ();
  Decl_heap.StaticMethods.LocalChanges.pop_stack ();
  Decl_heap.Classes.LocalChanges.pop_stack ();
  Decl_heap.Typedefs.LocalChanges.pop_stack ();
  Decl_heap.GConsts.LocalChanges.pop_stack ();
  ()
