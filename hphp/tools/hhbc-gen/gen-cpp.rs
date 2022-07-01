// Copyright (c) Facebook, Inc. and its affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

use anyhow::Result;
use hhbc_gen::ImmType;
use hhbc_gen::Inputs;
use hhbc_gen::InstrFlags;
use hhbc_gen::OpcodeData;
use hhbc_gen::Outputs;
use std::fmt::Display;
use std::fmt::{self};
use structopt::StructOpt;

#[derive(StructOpt, Debug)]
#[structopt(no_version)]
pub struct Opts {}

/// hphp-gen/gen-cpp.rs
///
/// Read the Rust opcode description generated by gen-rust.cpp, then generate a
/// C++ OPCODES macro definition that should perfectly match the original one
/// from hhbc.h, except whitespace.
///
/// This is just a demo to hand-check that we haven't lost any information
/// in the round trip. It also serves as an example that could be used
/// as the basis for one or more Rust proc-macros.
fn main() -> Result<()> {
    let ops = hhbc_gen::opcode_data();
    println!("#define OPCODES \\");
    for op in ops {
        print_op(op);
    }

    Ok(())
}

fn print_op(op: &OpcodeData) {
    print_opcode(
        &format!("{},", op.name),
        &format!("{},", fmt_immediates(&op.immediates)),
        &format!("{},", fmt_inputs(&op.inputs)),
        &format!("{},", fmt_outputs(&op.outputs)),
        &fmt_flags(&op.flags),
    );
}

fn print_opcode(name: &str, imms: &str, inputs: &str, outputs: &str, flags: &str) {
    print!("  O(");
    let mut indent = 4; // "  O(".len()
    let parts = [
        (17, name),
        (18, imms),
        (17, inputs),
        (12, outputs),
        (0, flags),
    ];
    const TABLE_WIDTH: usize = 70;
    let mut actual = indent;
    for (width, part) in parts {
        print!("{:width$}", part);
        indent += width;
        actual += std::cmp::max(part.len(), width);
        if width > 0 && part.len() > width {
            let rem = TABLE_WIDTH - actual;
            println!("{:rem$}  \\", "");
            print!("{:indent$}", "");
            actual = indent;
        }
    }
    println!(") \\");
}

fn fmt_immediates(imms: &[(&'static str, ImmType)]) -> String {
    fmt_count(imms.len(), "NA", |i| {
        let (_, imm) = &imms[i];
        match imm {
            ImmType::OA(s) => format!("OA({})", s),
            _ => format!("{:?}", imm),
        }
    })
}

fn fmt_inputs(inputs: &Inputs) -> String {
    match inputs {
        Inputs::NOV => "NOV".to_string(),
        Inputs::Fixed(items) => fmt_count(items.len(), "", |i| format!("{:?}", items[i])),
        Inputs::SMany => "SMANY".to_string(),
        Inputs::CMany => "CMANY".to_string(),
        Inputs::CUMany => "CUMANY".to_string(),
        Inputs::MFinal => "MFINAL".to_string(),
        Inputs::CMFinal(n) => format!("C_MFINAL({})", n),
        Inputs::FCall { inp, obj } => format!("FCALL({}, {})", inp, obj),
    }
}

fn fmt_outputs(outputs: &Outputs) -> String {
    match outputs {
        Outputs::NOV => "NOV".to_string(),
        Outputs::Fixed(items) => fmt_count(items.len(), "", |i| format!("{:?}", items[i])),
        Outputs::FCall { .. } => "FCALL".to_string(),
    }
}

fn fmt_flags(flags: &InstrFlags) -> String {
    format!("{:?}", flags)
}

fn fmt_count(n: usize, none: &str, f: impl Fn(usize) -> String) -> String {
    if n == 0 {
        none.to_string()
    } else {
        let words = ["", "ONE", "TWO", "THREE", "FOUR"];
        format!(
            "{}({})",
            words[n],
            (0..n).map(f).collect::<Vec<_>>().join(",")
        )
    }
}

struct FmtCount<'a, T, F>(&'a [T], &'a str, F)
where
    F: Fn(&mut dyn fmt::Write, &T) -> fmt::Result;

impl<'a, T, F> Display for FmtCount<'a, T, F>
where
    F: Fn(&mut dyn fmt::Write, &T) -> fmt::Result,
{
    fn fmt(&self, w: &mut fmt::Formatter<'_>) -> fmt::Result {
        let FmtCount(items, none, ref f) = *self;
        if items.is_empty() {
            w.write_str(none)
        } else {
            let words = ["", "ONE", "TWO", "THREE", "FOUR"];
            write!(w, "{}(", words[items.len()])?;
            let mut sep = "";
            for item in items {
                w.write_str(sep)?;
                sep = ",";
                f(w, item)?;
            }
            write!(w, ")")?;
            Ok(())
        }
    }
}
