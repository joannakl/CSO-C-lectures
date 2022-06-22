
#include <stdio.h>
#include "arrays.h"

void print_int_array ( int array[], int size){
    
    printf("array: "); 
    int i = 0; 
    for ( i = 0; i < size; i++){
        printf("%i, ", array[i] ); 
    }
    printf("\n");
}
