# lecture03

sample program for lecture 3: binary representation of types

Start by looking at `casting_pointers.c` program. Try to figure out what 
output it produces, then run the program and see what actually happens. 
Do you understand why it happens?


## Bits, bit vectors, signed and unsigned integers 

### Shift operators

Shifting bit vectors (i.e., multiplying and dividing by powers of 2)
is more efficient (faster for the processor) that arithmetic operations.
Most compilers will automatically convert some arithmetic operations to
shifts. 

Compiling the following two functions 

`multiplyBy12.c` 

`multiplyBy12+v2.c` 

to assembly (use `gcc -S`) produces almost identical files - the only difference
is in the names. 


### Signed vs. unsigned integers and casting problems 

`casting_surprises.c` 

Be careful when comparing signed and unsigned values. The results are not
always what your intuition would tell you. 

`unsigned_loop.p`

Work with this program to see the danger or use of unsigned integers
in the incorrect context (although the logic that lead to the design
of the loops in the program might have seem to be correct at first). 

### Explicit cast = truncated bit vector

`truncated.c` 

This program shows that casting from larger types to smaller types may
lead to loss of information and incorrect values. 

### Negating a number

`negation.c` 

This is a good exercise to verify by hand. 

### "Seeing" the bits and bytes 

`show-bytes.h`  and `show-bytes.c` 

These files provide functions for printing individual bytes corresponding to values of different 
types. They are used in the following programs: 

`show-bytes-in-int.c` 

`show-bytes-in-float.c` 

`show-bytes-in-string.c`

Compile: `gcc show-bytes-in-XXXXX.c show-bytes.c -o show-bytes-in-XXXXX` 


## Floating point numbers
 
`rounding.c` 

This slightly modified code from the book shows the effect of different modes of rounding on calculations
performed on floating point numbers. 



