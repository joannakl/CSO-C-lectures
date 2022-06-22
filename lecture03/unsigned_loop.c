#include<stdio.h>
/*
 * This program illustrates a problem that occurs
 * when doing arithmetic on unsigned integers and using
 * unsigned integers in inappropriate places.
 * 
 * The code as written will generate Bus error (core dumped)
 * or Segmentation fault (core dumped) when run !!!
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


int main () {
    
    //once we decrement the i when it reaches zero, the value
    //becomes positive (in fact it is the UMAX) so on the next
    //iteration the memory address is outside of the 
    //range of valid addresses for the process 
    
    //unsigned i;
    //short a[10] = {1,2,3,4,5,6,7,8,9,10};
    //for (i = 9U; i >= 0U ; i-- ) {
        //printf("hello ");
        //printf( "%i, ", a[i] );
    //}
    //printf("\n");

/**********************************************************************/

    //this is another confusing situation:
    //even though i is declared as signed int, for the purpose
    //of the calculation it is cast to unsigned int since
    //sizeof() operator returns an unsigned int 
    
    int i;
    short a[10] = {1,2,3,4,5,6,7,8,9,10};
    for (i = 9; i - sizeof(char) >= 0 ; i-- )
        printf( "%i: %i, ", i, a[i] );
    printf("\n");


    return 0;
}
