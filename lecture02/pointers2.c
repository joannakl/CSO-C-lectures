#include <stdio.h>
/*
 * This program illustrates very basic pointer operations
 * and how variables and pointers can be manipulated.
 *
 * Author: Joanna Klukowska
 *
 */

int main() {

    int n = 10;
    int * pn = &n;

    //print the value of variable n and the value of the pointer
    //NOTE: pn contains a memory address of n - what happens when we run
    //program several times?
    printf("n = %d \n", n );
    printf("pn   = %p \n", pn );

    //??? adding and subtracting integers to pointers
    //what might this do?

    printf("pn+1 = %p \n", (pn+1) );
    printf("pn-1 = %p \n", (pn-1) );


    // * is used to dereference the pointer, i.e., access the value to
    // which the pointer pointers to
    //
    // what do you thing *(pn+1) and *pn + 1 will do?
    // WARNING: this may cause the program to crash

    printf("    *pn = %d \n", *pn );
    printf("*(pn+1) = %d \n", *(pn+1) );
    printf("*pn + 1 = %d \n", *pn+1 );



    return 0;

}
