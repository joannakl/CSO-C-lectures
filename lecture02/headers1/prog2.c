#include <stdio.h>
#include "arrays.h" 

/*
 * This program illustrates how to work with 2D arrays.  
 * 
 * Author: Joanna Klukowska 
 * 
 */ 
 
#define ROWS 3
#define COLS 2



int main () {
    
    int matrix[ROWS][COLS] = {{1,2},{3,4},{5,6}} ;
    
    int sum_of_cols[COLS] = {0};
    int sum_of_rows[ROWS] = {0}; 
    int sum = 0; 

    
    int c, r;
    
    
    for ( r = 0; r < ROWS; r++ ) {
        for ( c = 0; c < COLS; c++) {
            sum += matrix[r][c]; 
            sum_of_cols[c] += matrix[r][c]; 
            sum_of_rows[r] += matrix[r][c]; 
        }
    }
    
    //int * p_matrix = &matrix;
    //for ( r = 0; r < ROWS; r++ ) {
        //for ( c = 0; c < COLS; c++) {
            //int val = p_matrix[r*COLS+c]; 
            //printf("%i, ", val ); 
            //sum += val; 
            //sum_of_cols[c] += val; 
            //sum_of_rows[r] += val; 
        //}
    //}
    
    print_int_array(sum_of_cols, COLS);
    print_int_array(sum_of_rows, ROWS); 
    
}
             

