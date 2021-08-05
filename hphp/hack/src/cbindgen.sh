#!/usr/bin/env bash

set -euo pipefail

top="$(pwd)"
if [ "$(echo "$top" | grep -c "fbcode\$")" -ne 1 ]
  then
    echo "This script should be run from fbsource/fbcode."
    exit 1
fi

DIR=hphp/hack/.cargo_vendor
if [ ! -d "$DIR" ];
then
    echo "Need to generate .cargo_vendor"
    echo " Try 'hphp/hack/scripts/facebook/cargo_fetch.sh'"
    read -r -p " Perform these steps? [y/n] " input
    case $input in
        [yY][eE][sS]|[yY])
        echo " Perfoming steps"
        hphp/hack/scripts/facebook/cargo_fetch.sh
        ;;
    *)
        echo " No steps performed. Exiting."
        exit 2
        ;;
    esac
fi

set -x

cargo="buck run fbsource//third-party/rust:cargo-cargo --"
cbindgen="buck run fbsource//third-party/rust:cbindgen-cbindgen --"

# 'cargo update' ensures the existing Cargo.lock files contain the latest versions

# ffi.h
(cd hphp/hack/src/utils/ffi && \
     $cargo update && \
     $cbindgen --config ./cbindgen_ffi.toml \
              --crate ffi \
              --output "$top/hphp/hack/src/utils/ffi/ffi.h")

#  hhbc_id.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhbc_id && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_id.toml \
              --crate hhbc_by_ref_hhbc_id \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_id.h")

#  hhbc_label.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_label && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_label.toml \
              --crate hhbc_by_ref_label \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_label.h")

#  hhbc_local.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_local && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_local.toml \
              --crate hhbc_by_ref_local \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_local.h")

#  hhbc_runtime.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_runtime && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_runtime.toml \
              --crate hhbc_by_ref_runtime \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_runtime.h")

# hhbc_ast.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhbc_ast && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_ast.toml \
              --crate hhbc_by_ref_hhbc_ast \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_ast.h")

# hhbc_instruction_sequence.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_instruction_sequence && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_instruction_sequence.toml \
              --crate hhbc_by_ref_instruction_sequence \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_instruction_sequence.h")

# hhbc_symbol_refs_state.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_symbol_refs_state && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_symbol_refs_state.toml \
              --crate hhbc_by_ref_symbol_refs_state \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_symbol_refs_state.h")

# hhbc_hhas_symbol_refs.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_symbol_refs && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_symbol_refs.toml \
              --crate hhbc_by_ref_hhas_symbol_refs \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_symbol_refs.h")

# hhbc_hhas_constant.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_constant && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_constant.toml \
              --crate hhbc_by_ref_hhas_constant \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_constant.h")

# hhbc_hhas_type.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_type && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_type.toml \
              --crate hhbc_by_ref_hhas_type \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_type.h")

# hhbc_hhas_attribute.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_attribute && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_attribute.toml \
              --crate hhbc_by_ref_hhas_attribute \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_attribute.h")

# hhbc_hhas_adata.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_adata && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_adata.toml \
              --crate hhbc_by_ref_hhas_adata \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_adata.h")

# hhbc_hhas_body.h
(cd hphp/hack/src/hhbc/hhbc_by_ref/cargo/hhbc_by_ref_hhas_body && \
     $cargo update && \
     $cbindgen --config ../../cbindgen_hhbc_hhas_body.toml \
              --crate hhbc_by_ref_hhas_body \
              --output "$top/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_body.h")

signscript="$top/../xplat/python/signedsource_lib/signedsource.py"
eval "${signscript}" sign "${top}"/hphp/hack/src/utils/ffi/ffi.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_id.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_label.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_local.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_runtime.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_ast.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_instruction_sequence.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_symbol_refs_state.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_symbol_refs.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_constant.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_type.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_attribute.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_adata.h
eval "${signscript}" sign "${top}"/hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_body.h

# Quick sanity check: Does a program that includes these headers compile?
cat > main.cpp <<EOF
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_instruction_sequence.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_symbol_refs.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_constant.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_type.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_attribute.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_adata.h"
#include "hphp/hack/src/hhbc/hhbc_by_ref/hhbc_hhas_body.h"

#include <iostream>

int main() {
  using namespace HPHP::hackc::hhbc::ast;

  InstrSeq _b6;
  HhasSymbolRefs _b7;
  HhasConstant _b8;
  HhasAttribute _b9;
  Info _b10;
  HhasAdata _b11;
  HhasBodyEnv _b12;
  //HhasBody _b13;

  std::cout << "Ok!" << std::endl;
  return 0;
}
EOF
g++ -std=c++14 main.cpp -I . -o run && ./run
rm -f ./main.cpp ./run
