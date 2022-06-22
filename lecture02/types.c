#include <stdio.h>
/*
 * This program illustrates different data types
 * in C programming language. It also shows how to use
 * printf() function to print variables of different
 * types.
 *
 * author: Joanna Klukowska
 *
 */

int main() {

    char c = 'a';
    short s = 32767;
    int i = 2147483647;
    long int l = 2147483647;
    long long int ll = 9223372036854775806;
    float f = -2718.0169102661;
    double d = 3.1415926535897932384626433;
    int *iptr = NULL;
    char* string = "test string";

    //print values of variables
    printf("c: %c\n", c);
    printf("s: %i\n", s);
    printf("i: %i\n", i);
    printf("l: %li\n", l);
    printf("ll: %lli\n", ll);
    printf("f: %f\n", f);
    printf("d: %f\n", d);
    printf("iptr: %p\n", iptr);
    printf("string: %s\n", string);
    printf("===================\n");

    // print multiple values in a single expression
    printf("char c: %c, int s: %i, string: %s\n", c, s, string);
    printf("===================\n");

    // formatted print
    printf("float f with only two decimal places: %.2f\n", f);
    printf("float f with only one decimal place and printed in a field of 10 characters (right aligned): %10.1f\n", f);
    printf("float f with only one decimal place and printed in a field of 10 characters  (left aligned): %-10.1f\n", f);
    printf("===================\n");

    // print information about sizes of types/variables of that type
    printf("%-25s: %4ld\n", "size of char", sizeof(char) );
    printf("%-25s: %4ld\n", "size of short", sizeof(short) );
    printf("%-25s: %4ld\n", "size of int", sizeof(int) );
    printf("%-25s: %4ld\n", "size of long int", sizeof(long) );
    printf("%-25s: %4ld\n", "size of long long int", sizeof(long long) );
    printf("%-25s: %4ld\n", "size of float", sizeof(float) );
    printf("%-25s: %4ld\n", "size of double", sizeof(double) );
    printf("%-25s: %4ld\n", "size of char*", sizeof(char*) );
    printf("%-25s: %4ld\n", "size of int*", sizeof(int*) );
    printf("%-25s: %4ld\n", "size of double*", sizeof(double*) );


    return 0;
}
