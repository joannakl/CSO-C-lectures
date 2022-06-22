#include <stdio.h>
/*
 * This program illustrates how to pass array parameters to functions. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


//This function sums the first size many elements
//in the array and returns the sum. 
int sumElements (int a[], int size );

int main () {
	
	const int size = 10;
	int a[size];
	int i;
	for (i = 0; i < size; i++) {
		a[i] = i;
	}
    
	//add all values
	printf( "sum of all elements in a is %d\n", 
                        sumElements ( a, size ) );
    //add only first five values 
	printf( "sum of first 5 elements in a is %d\n",   
                        sumElements ( a, 5 ) );
    //we do not need to start from the zero index 
	printf( "sum of last 5 elements in a is %d\n", 
                        sumElements ( a+5, 5 ) );
	
	return 0;
}

//adds size many elements of array a 
//NOTE: this will cause problems if array size and size variable do
//not agree. 
int sumElements ( int a[], int size ){
	int sum = 0; 
	int i;
	for (i = 0; i < size; i++ ) {
		sum = sum + a[i];
	}
	return sum;
}
