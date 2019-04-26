# Code Golf

A small repo for code diversions and doing weird stuff with C.  Try to write C programs using as few bytes as possible in the source code by using a lot of dumb tricks for fun.  If you think you can make any of these smaller, let me know please!  Code is written to be small in source, not performant.

## Building Binaries

Makefile at top level to come.  Code in all directories should compile with `gcc -o name source.c`.

## List of Golf Tricks in C

- implicit `int` :  simply enumerating variables on a line, for example like `x,y,z;` will save three bytes by implying `int`
- global implicit initialization : declaring `int` variables like above in global scope will set them to `0`
- `main`'s `argc` to initialize  : declaring an `int` in `main`'s argument will default it as one if the binary is invoked as `./a.out`
- implicit library includes : many libraries like `stdio` will be inluded by the compiler if functions like `printf` are used
- `for(;COND;)` looping : `for` and `while` loops take up the same amount of bytes, but `for` is generally preferable since the semi-colons in it can eat others in regular code
- serial assignment : variables set to the same value can save a little space via `x=y=z=0;` vs `x=0;y=0;z=0;`
- assign to input param : when subfunctions that return a value are needed, `f(a){return 2<<a&3;}` can be converted into `f(a){a=2<<a&3;}` since the compiler will generally have the return value stored at the input
- ternary operator : often is a tighter stand in for `if..else`
- ternary condition as result : for some compilers (gcc) `a?:c` gives the same result as `a?a:c`.  This sits on the fact that only one of the results will be evaluated

## Tricks Specific to Problems

TBD

## Ungolfed Source

Each problem will have an ungolfed, hopefully readable, source.  The golfed sources will be suffixed with a `_terse` in the filename.
