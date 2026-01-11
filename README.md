# Simple Compiler

This is a simple compiler built in C++ following, Jack Crenshaw's [Let's Build a Compiler](https://compilers.iecc.com/crenshaw/) series.

## Testing
Copy output into program.s, then run:

as -o program.o program.s; ld filename.o -o program; ./program; echo $?
