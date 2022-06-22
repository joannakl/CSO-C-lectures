#include <stdio.h>
/*
 * This program illustrates a problem that occurs
 * when doing comparison of signed and unsigned integers.
 * The values automatically are cast to unsigned and the
 * results are surprising. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 



int main() {

    if ( -1 < 0 )
        printf ("-1 < 0 is true" );
    else
        printf ("-1 < 0 is false" );

    printf("\n");

    if ( -1 < 0U )
        printf ("-1 < 0U is true" );
    else
        printf ("-1 < 0U is false" );

    printf("\n");

    return 0;
}
