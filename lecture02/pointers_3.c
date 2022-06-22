#include <stdio.h>
/*
 * This program illustrates the relationship between pointers 
 * and static arrays.  
 * 
 * Author: Joanna Klukowska 
 * 
 */ 



int main () {
    int i = 0;
    const int size = 10;
    //create a static array 
    int a[size];
    
    //memory allocated to arrays is not zeroed
    for (i = 0; i< size; i++ ){
        printf("%3d, ", a[i]);
    }
    printf("\n");
    
    //initialize the content of the array
    for (i = 0; i< size; i++ ){
        a[i] = i; 
    }
    printf("\n");
  
    //create a pointer that points to the start of the array
    int *pa = a;
    //we can iterate through the array using this pointer
    //after this loop, pa still points to the start of the array 
    for (i = 0; i< size; i++ ){
        printf("%3d, ", pa[i] ); 
    }
    printf("\n");
    
    
   
    
    //or 
    //after this loop, pa still points to the start of the array 
    for (i = 0; i< size; i++ ){
        printf("%3d, ", *(pa + i) ); 
    }
    printf("\n");
    
     
    
    //or 
    //after this loop, pa is modified and points to a memory address 
    // right after the last element in the array 
    for (i = 0; i< size; i++ ){
        printf("%3d, ", *(pa++) ); 
    }
    printf("\n");
    
    
    //or backwards
    //after this loop, pa points to the start of the array again 
    for (i = 0; i< size; i++ ){
        printf("%3d, ", *(--pa) ); 
    }

    printf("\n");
    
    
    printf("\n");
}
    
    
