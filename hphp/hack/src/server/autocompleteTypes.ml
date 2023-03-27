(*
 * Copyright (c) 2017, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

(* Details about functions to be added in json output *)
type func_param_result = {
  param_name: string;
  param_ty: string;
  param_variadic: bool;
}
[@@deriving show]

type func_details_result = {
  params: func_param_result list;
  return_ty: string;
  min_arity: int;
}
[@@deriving show]

type snippet_with_fallback = {
  snippet: string;
  fallback: string;
}

type insert_text =
  | InsertLiterally of string
  | InsertAsSnippet of snippet_with_fallback

type autocomplete_item = {
  res_decl_pos: Pos.absolute;
  res_replace_pos: Ide_api_types.range;
  res_base_class: string option;
  res_label: string;
  res_insert_text: insert_text;
  res_detail: string;
  res_filter_text: string option;
  res_additional_edits: (string * Ide_api_types.range) list;
  res_fullname: string;
  res_kind: SearchUtils.si_kind;
  func_details: func_details_result option;
  res_documentation: string option;
}

(* The type returned to the client *)
type ide_result = {
  completions: autocomplete_item list;
  char_at_pos: char;
  is_complete: bool;
}

type result = autocomplete_item list

type legacy_autocomplete_context = {
  is_manually_invoked: bool;
  is_after_single_colon: bool;
  is_after_double_right_angle_bracket: bool;
  is_after_open_square_bracket: bool;
  is_after_quote: bool;
  is_before_apostrophe: bool;
  is_open_curly_without_equals: bool;
  char_at_pos: char;
}

(* Autocomplete token *)
let autocomplete_token = "AUTO332"

(* Autocomplete token length *)
let autocomplete_token_length = 7
