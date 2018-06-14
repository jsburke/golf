# Code Golf

A small repo for code diversions and doing weird stuff with C.  Try to write C programs using as few bytes as possible in the source code by using a lot of dumb tricks for fun.  If you think you can make any of these smaller, let me know please!  Code is written to be small in source, not performant.

## Building Binaries

Makefile at top level to come.  Code in all directories should compile with `gcc -o name source.c`.

## List of Golf Tricks in C

- n in `main(n)`        : here, n will act as the normal `int argc`.  Thus, by calling `./my_binary` on the command line, n becomes 1
- uninitialized globals : globals that are not initialized will default to 0

## Tricks Specific to Problems

Here I'll put tricks specific to certain problems done, like using the half value in prime calculation

## Ungolfed Source

Not present yet, but I'll try to get human sensible source up soon!
