# Simple Calculator REPL

This project implements a simple command line REPL which parses and executes
integer arithmetic expressions. It is strictly for educational purposes only!

The implementation is done in plain `C` without external dependencies beyond
`glibc`.

Documentation for this project is build locally with `doxygen`.

## Features

- Parse simple expressions like `1 + 1` into an internal abstract syntax tree
- use the internal representation to evaluate the given expression
- provide help `h`, clear `c`, and quit `q` commands

## Upcoming Features

- allow variable expressions involving integer literals like `x = 1`
- previously assigned variables are usable in later arithmetic expressions
