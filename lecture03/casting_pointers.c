
#include <stdio.h>
#include <stdlib.h>
/*
 * Puzzle program: what does this program print.
 * 
 * Warning: the gcc generates a warning when compiling this code.
 * We are going to ignore this warning for now.  
 * 
 * Author: Joanna Klukowska 
 * 
 */ 

int main () {
    
    int nums [ 10 ] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74 } ;
    
    int * p = nums;
    char *c = (char*)nums; 
    float *f = (float*)nums; 
    
    int i;
    
    for (i = 0; i < 10; i++ )  {
        printf("%4i,", *(p+i) ); 
    }
    printf("\n"); 
    
    for (i = 0; i < 10; i++ )  {
        printf("%4c,", *(c+i) ); 
    }
    printf("\n"); 
    
    
    for (i = 0; i < 10; i++ )  {
        printf("%4.2f,", *(f+i) ); 
    }
    printf("\n"); 
    
    return 0; 
}
