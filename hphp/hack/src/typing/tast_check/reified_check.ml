(**
 * Copyright (c) 2018, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Core_kernel
open Tast
open Typing_defs

module Env = Tast_env

let is_soft_reified tparam =
  List.exists tparam.tp_user_attributes ~f:(fun { Nast.ua_name = (_, n); _ } ->
    Naming_special_names.UserAttributes.uaSoft = n
  )

let tparams_has_reified tparams =
  List.exists ~f:(fun t -> t.tp_reified && not (is_soft_reified t)) tparams

let match_reified i tparam targ =
  let { tp_reified; tp_name; _ } = tparam in
  let (targ_pos, _), targ_reified = targ in
  if (tp_reified && not (is_soft_reified tparam) && not targ_reified) then
    Errors.mismatched_reify tp_name targ_pos i

(* When passing targs to a reified position, they must either be concrete types
 * or reified type parameters. This prevents the case of
 *
 * class C<reify Tc> {}
 * function f<Tf>(): C<Tf> {}
 *
 * where Tf does not exist at runtime.
 *)
let verify_targ_valid_for_reified_tparam env tparam targ =
  if tparam.tp_reified then
    let ty = Env.hint_to_ty env targ in
    begin match Typing_generic.IsGeneric.ty (Tast_env.get_tcopt env) ty with
    | Some resolved_targ when not (Tast_env.get_reified env (snd resolved_targ)) ->
      Errors.erased_generic_passed_to_reified tparam.tp_name resolved_targ
    | _ -> ()
    end

let verify_call_targs env expr_pos decl_pos tparams targs =
  if tparams_has_reified tparams &&
     List.is_empty targs then
    Errors.require_args_reify decl_pos expr_pos;
  (* Unequal_lengths case handled elsewhere *)
  let pairs = List.zip tparams targs in
  Option.iter pairs ~f:(List.iteri ~f:(fun i (tparam, targ) ->
    match_reified i tparam targ;
    verify_targ_valid_for_reified_tparam env tparam (fst targ)))

let handler = object
  inherit Tast_visitor.handler_base

  method! at_expr env x =
    (* only considering functions where one or more params are reified *)
    match x with
    | (pos, _), Call (_, ((_, (_, Tfun { ft_pos; ft_tparams; _ })), _), targs, _, _) ->
      let tparams = fst ft_tparams in
      verify_call_targs env pos ft_pos tparams targs
    | (pos, _), New ((_, CI (_, class_id)), targs, _, _, _) ->
      begin match Env.get_class env class_id with
      | Some cls ->
        let tparams = Typing_classes_heap.tparams cls in
        let class_pos = Typing_classes_heap.pos cls in
        verify_call_targs env pos class_pos tparams targs
      | None -> () end
    | _ -> ()

  method! at_hint env = function
    | pos, Aast.Happly ((_, class_id), targs) ->
      let tc = Env.get_class env class_id in
      Option.iter tc ~f:(fun tc ->
        let tparams = Typing_classes_heap.tparams tc in
        ignore (List.iter2 tparams targs ~f:(verify_targ_valid_for_reified_tparam env));

        (* TODO: This check could be unified with the existence check above,
         * but would require some consolidation T38941033. List.iter2 gives
         * a nice Or_unequal_lengths.t result that replaces this if statement *)
        let tparams_length = List.length tparams in
        let targs_length = List.length targs in
        if tparams_length <> targs_length then
          if targs_length <> 0
          then Errors.type_arity pos class_id (string_of_int (tparams_length))
          else if tparams_has_reified tparams then
            Errors.require_args_reify (Typing_classes_heap.pos tc) pos
      )
    | _ ->
      ()

end
