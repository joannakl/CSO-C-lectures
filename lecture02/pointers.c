#include <stdio.h>
/*
 * This program illustrates very basic pointer operations
 * and how variables can be modified through pointers.
 *
 * Author: Joanna Klukowska
 *
 */

int main() {


    //create three variables with three different types
    int n = 10;
    double f = 3.17;
    char c = 'a';

    printf("n = %d \t\t f = %.3f \t\t c = %c \n", n, f, c);
    printf("===================\n");

    //create pointers to above variables
    int * pn = &n;
    double * pf = &f;
    char * pc = &c;

    printf("n = %d \t\t f = %.3f \t\t c = %c \n", n, f, c);
    printf("n = %d \t\t f = %.3f \t\t c = %c \n", *pn, *pf, *pc);
    printf("===================\n");

    //modify the values of variables through the pointers
    *pn = 8;
    *pf = 14.89;
    *pc += 9;
    printf("n = %d \t\t f = %.3f \t\t c = %c \n", n, f, c);
    printf("n = %d \t\t f = %.3f \t\t c = %c \n", *pn, *pf, *pc);
    printf("===================\n");

    //keep in mind that the value to which the pointer points to
    //is not the same as the value stored in that pointer (which is a memory address)

    printf("n:    %d\n", n);
    printf("&n:   %p (this is the address/location at which n is stored)\n", &n);
    printf("---\n");
    printf("pn:   %p (this is the value stored in pn)\n", pn);
    printf("*pn:  %d (this is the the value to which pn points to)\n", *pn);
    printf("&pn:  %p (this is the address/location at which pn is stored)\n", &pn);


    return 0;

}
