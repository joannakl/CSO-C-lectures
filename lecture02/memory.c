#include <stdio.h>
#include <stdlib.h>   //  <=== for malloc and free 
/*
 * This program illustrates memory allocation 
 * using malloc and deallocation using free. 
 * 
 * It also shows an example (commented out)
 * of why the pointers for which the momory was deallocated
 * should not be used to access that memory. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


int main () {
    
    int size = 10; 
    
    //allocate a consecutive chunk of memory that
    //can store 10 integer values 
    int * nums = malloc (sizeof(int) * size) ;
    
    if (nums == NULL ){
        printf("We have a problem with memory allocation!\n");
        return -1;
    }
    
    int i;
    
    for (i = 0; i < size; i++ ) {
        nums[i] = i * 3;
    }
    
    for (i = 0; i < size; i++ ) {
        printf( "%2i: %4i\n", i, *(nums+i) ) ;
    }
    
    //deallocate memory that was allocated by malloc 
    if (nums != NULL ) {
        free (nums);
        //nums = NULL ;
    }
    
    //the following lines are examples of 
    //miss-using a dangling pointer 
    //
    //we need to comment out the line above that sets nums to NULL 
    

    
    double * vals =  malloc(sizeof(double) * size/2);
    
        
    for (i = 0; i < size; i++ ) {
        vals[i] = i * 3.14;
    }
    
    printf("\n\nnums and vals arrays after assigning values to vals\n\n");
    for (i = 0; i < size; i++ ) {
        if (i < size/2)
            printf( "%2i:  int %7i     double %10.4g\n", i, *(nums+i), *(vals+i)  ) ;
        else 
            printf( "%2i:  int %7i  \n", i, *(nums+i)  ) ;
    }
      
   
    for (i = 0; i < size; i++ ) {
        nums[i] = i * 3;
    }
    
    
    printf("\n\nnums and vals arrays after modifying nums\n\n");
    for (i = 0; i < size; i++ ) {
        if (i < size/2)
            printf( "%2i:  int %7i     double %10.4g\n", i, *(nums+i), *(vals+i)  ) ;
        else 
            printf( "%2i:  int %7i  \n", i, *(nums+i)  ) ;
    }

    return 0;
}
