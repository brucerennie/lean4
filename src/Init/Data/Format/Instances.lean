/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
module

prelude
public import Init.Data.Format.Basic
public import Init.Data.Array.Basic
public import Init.Data.ToString.Basic

public section

open Std

instance (priority := low) [ToString α] : ToFormat α :=
  ⟨Std.Format.text ∘ toString⟩

def List.format [ToFormat α] : List α → Format
  | [] => "[]"
  | xs => Format.sbracket <| Format.joinSep xs ("," ++ Format.line)

instance [ToFormat α] : ToFormat (List α) where
  format := List.format

instance [ToFormat α] : ToFormat (Array α) where
  format a := "#" ++ format a.toList

/--
Formats an optional value, with no expectation that the Lean parser should be able to parse the
result.

This function is usually accessed through the `ToFormat (Option α)` instance.
-/
def Option.format {α : Type u} [ToFormat α] : Option α → Format
  | none   => "none"
  | some a => "some " ++ Std.format a

instance {α : Type u} [ToFormat α] : ToFormat (Option α) :=
  ⟨Option.format⟩

instance {α : Type u} {β : Type v} [ToFormat α] [ToFormat β] : ToFormat (Prod α β) where
  format := fun (a, b) => Format.paren <| format a ++ "," ++ Format.line ++ format b

/--
Converts a string to a pretty-printer document, replacing newlines in the string with
`Std.Format.line`.
-/
def String.toFormat (s : String) : Std.Format :=
  Std.Format.joinSep (s.splitOn "\n") Std.Format.line

instance : ToFormat String.Pos where
  format p := format p.byteIdx
