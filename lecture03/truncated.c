#include<stdio.h>
/*
 * This program illustrates casting 
 * between types of different sizes:
 * - when casting from a smaller type size to a larger type size 
 * the leading bit is replicated to fill in the new bits 
 * - when casting from a larger type size to a smaller type size
 * there is a good chance of bits being truncated. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 



int main () {

    //value of si is promoted to a larger size type 

    short si = 255;
    int i = si; //no cast needed for promotion 
    
    printf("si = %i\n i = %i\n\n", si, i );
    printf("si = 0x%04hX\n i = 0x%08X\n\n", si, i );

    
    si = 0x8AB3;    //this is 2^23 
    i = si;

    printf("si = %i\n i = %i\n\n", si, i );
    printf("si = 0x%04hX\n i = 0x%08X\n\n", si, i );

    printf("-----------------------------------------------\n");
    
    //value of i is too big to be stored in short
    //the truncated result may end up having a different sign, why? 
    

    i = 16777217;   //this is 2^24 + 1
    si = (short) i;

    printf(" i = %i\nsi = %i\n\n", i, si );
    printf(" i = 0x%08X\nsi = 0x%04hX\n\n", i, si );


    i = -200423;
    si = (short) i;

    printf(" i = %i\nsi = %i\n\n", i, si );
    printf(" i = 0x%08X\nsi = 0x%04hX\n\n", i, si );


    i = 0xF23452AE;
    si = (short) i;

    printf(" i = %i\nsi = %i\n\n", i, si );
    printf(" i = 0x%08X\nsi = 0x%04hX\n\n", i, si );



    return 0;
}
