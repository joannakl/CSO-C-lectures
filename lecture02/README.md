# lecture02
sample programs for lectures on C

## Stages of compilation

`hello.c`

1. preprocessing

    `gcc -E hello.c > hello.i`

    look at the content of `hello.i` file, verify that the preprocessor replaced all of the lines that start with a # sign and that all comments have been removed

2. compilation proper - i.e. convert C to assembly

    `gcc -S hello.c `

    This automatically produces the output file called `hallo.s` (name matches the source file, the extension is `.s`).

    Take a look at the `hello.s` file. This is the x86-64 assembly - in a few weeks you will be able to read this kind of code.

3. building the code - i.e. convert assembly to binary

    `gcc -c hello.c`

    This automatically produces the output file called `hello.o` - this is the **object** code.
    It is in a binary format (so cannot read it anymore), but it cannot be executed yet - it does not have all of the necessary pieces.

4. linking - i.e. building the executable

    `gcc hello.o -o hello`

    This finally produces the executable file (i.e.,
    something that can be executed/run). The resulting file combines the binary of `hello.o` (our program) with all the library functions that were used (in this case the binary verion of `printf`.
    Look at the sizes of `hello` and `hello.o`. The difference cames from C libraries that were incorporated into the program.   


## Data types in C
... and how to print different types of values to the standard output stream

`types.c`

compile: `gcc types.c -o types` <br>
run: `./types`

## (Mis)Use of globals

The following program shows the confusion that can result from using global variables.

`globals.c`

compile: `gcc globals.c -o globals` <br>
run: `./globals`

... this gets even more complicated when we use multiple files that all access the same
global variable (DO NOT DO THIS):

`program.c   add.c    subtract.c`

compile: `gcc program.c add.c subtract.c -o program`
run: `./program`

## Functions

Functions need to be declared before they are used. The typical structure
of the programs will contain function declarations, followed by main(),
followed by definitions of functions.

`modulo.c`

compile: `gcc modulo.c -o modulo` <br>
run `./modulo NUM1 NUM2`

(this program accepts command line arguments).  




## Starting with pointers

First: very basic program that creates pointers to variables and modifies the values
of those variables through pointers.
Bonus: another example of using `printf()`.

`pointers.c`

compile: `gcc pointers.c -o pointers` <br>
run `./pointers`

Second: we can add numbers to pointers -- yes, to pointers, not only to the values to
which the pointers point to

`pointers2.c`

compile: `gcc pointers2.c -o pointers2` <br>
run `./pointers2`

Third: using pointers as parameters to functions (pass by pointer) gives the
function direct access to the value passed to it (to access it and change it).

`swap_1.c` - unsuccessful attempt at swapping

compile: `gcc swap_1.c -o swap_1` <br>
run `./swap_1`

`swap_2.c` - swapping values by using pointer parameters

compile: `gcc swap_2.c -o swap_2` <br>
run `./swap_2`


### Pointers and static arrays
`pointers_3.c`

compile: `gcc pointers_3.c -o pointers_3` <br>
run `./pointers_3`

### Casting pointers to different types

`casting.c`

compile: `gcc casting.c -o casting` <br>
run `./casting`

### Passing arrays/pointers to functions


`sum.c`

compile: `gcc sum.c -o sum` <br>
run `./sum

`sum_2.c`

compile: `gcc sum_2.c -o sum_2` <br>
run `./sum_2`

### "Generic" swap with `void` pointers

`swap_generic.c`

compile: `gcc swap_generic.c -o swap_generic` <br>
run `./swap_generic`

### 2D arrays

`sum2D.c`

compile: `gcc sum2D.c -o sum2D` <br>
run `./sum2D`

## Separate Compilation (using header files)

If a function appears in more than one program, it is often a sign to move it to its own location
(i.e., a source code file separete from the `main()` function).

### not using header files :cry:

in header0 directory, there are two files prog1.c and prog2.c, both of them contain
the declaration and the definition of `print_int_array` function

`prog1.c`

compile: `gcc prog1.c -o prog1` <br>
run `./prog1`

`prog2.c`

compile: `gcc prog2.c -o prog2` <br>
run `./prog2`

(but this is a lot of repeated code and changes will need to be made in two places if we want to make them)

### with header files :smile:

in header1 directory, there are two additional files arrays.h and arrays.c - these files contain the declaration
and the definition of `print_int_array` function  (those are no longer present in prog1.c and prog2.c)

we can compile each source code file separately to object files (binaries but not complete executables)

compile: `gcc -c prog1.c` <br>
compile: `gcc -c prog2.c` <br>
compile: `gcc -c arrays.c` <br>

(this should result in three files with matching names and .o extensions)

to produce the executable binary for prog1, run

`gcc prog1.o arrays.o -o prog1`

to produce executable binary for prog2, run

`gcc prog2.o arrays.o -o prog2`

There are other ways to produce those programs and you will discover them in the course of this semester.


## Strings in C

Constant literals vs. local strings.

`strings.c`

compile: `gcc strings.c -o strings` <br>
run `./strings

### Arrays of characters OR strings - the difference is in the last character

`string_2.c`

compile: `gcc string_2.c -o string_2` <br>
run `./string_2


## Structures

Structures allow us to represent larger units and define building blocks
for data structures.

`student_struct.c`

compile: `gcc student_struct.c -o student_struct` <br>
run `./student_struct

`typedef` allows us to rename types (usually to shorten the name
or simpify the name)

`student_struct_2.c`

compile: `gcc student_struct_2.c -o student_struct_2` <br>
run `./student_struct_2

to work with pointers to structures, we need to use the arrow,
`->`, operator

`student_struct_3.c`

compile: `gcc student_struct_3.c -o student_struct_3` <br>
run `./student_struct_3

the very first (not very good) linked list

`list.c`

compile: `gcc list.c -o list` <br>
run `./list`

## Dynamic Memory Allocation

allocating and deallocating blocks of memory

`memory.c`

compile: `gcc memory.c -o memory` <br>
run `./memory`

A better implementation of the linked list:

`list2.c`

compile: `gcc list2.c -o list2` <br>
run `./list2`

try also running it as
`valgrind ./list2`  

## Valgrind

`valgrind` attempts to analyze the memory usage of the program.
At the end of the run of the `list2` program you should see something
like this:

    ==21735== HEAP SUMMARY:
    ==21735==     in use at exit: 0 bytes in 0 blocks
    ==21735==   total heap usage: 4 allocs, 4 frees, 1,072 bytes allocated
    ==21735==
    ==21735== All heap blocks were freed -- no leaks are possible

The "no leaks" on the last line is what you are aiming for!

If we comment out the code that deallocates memory in the `removeFront` method, i.e., comment out the lines

    free(n);
    n = NULL;

then you will see a report from `valgrind` that looks something like this:

    ==32137== HEAP SUMMARY:
    ==32137==     in use at exit: 48 bytes in 3 blocks
    ==32137==   total heap usage: 4 allocs, 1 frees, 1,072 bytes allocated
    ==32137==
    ==32137== LEAK SUMMARY:
    ==32137==    definitely lost: 16 bytes in 1 blocks
    ==32137==    indirectly lost: 32 bytes in 2 blocks
    ==32137==      possibly lost: 0 bytes in 0 blocks
    ==32137==    still reachable: 0 bytes in 0 blocks
    ==32137==         suppressed: 0 bytes in 0 blocks
    ==32137== Rerun with --leak-check=full to see details of leaked memory

This program has memory leaks and that is not good.
