#include<stdio.h>
/*
 * Calculating -n based on the value of n can be done
 * by using bit-wise negation and adding 1 to n. 
 * 
 * You should be able to verify this by hand.
 * 
 * Author: Joanna Klukowska 
 * 
 */ 



int main () {

    
    
    int num1 = 35;
    int num2 = ~num1; 
    int num3 = num2 + 1; 

    printf(" num1 = %i\n", num1 );
    printf(" num2 = %i\n", num2 );
    printf(" num3 = %i\n\n", num3 );

    

    
    num1 = -35;
    num2 = ~num1; 
    num3 = num2 + 1; 

    printf(" num1 = %i\n", num1 );
    printf(" num2 = %i\n", num2 );
    printf(" num3 = %i\n", num3 );

    


    return 0;
}
