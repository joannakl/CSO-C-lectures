#include <stdio.h>
/*
 * This program illustrates two different kinds of  c-strings:
 * constant literals and local static arrays. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 

//constant global of type int 
//(so we can see its memory address) 
int y = 5;

int main () {
    //local variable of type int 
	int x = 17;
	
    //null terminated character array 
    //(can be modified, memory allocated on the stack) 
    //(the compiler decides how much memory to allocate for this array) 
    char h1[] = "hello";
    
	//constant string literal 
    //(immutable, no memory allocated on the stack) 
    char *h2 =  "hello";

	
    //globals and constant string literals are stored in 
    //different memory area than the local variables 
	printf("h1 is at %p\n", h1);
	printf("h2 is at %p\n", h2);
	printf("\n");
	printf(" x is at %p\n", &x);
	printf(" y is at %p\n", &y);
    
    printf("\n"); 
    
    //checking the size of each string 
    printf("h1 size: %ld characters/bytes\n", sizeof(h1) ); 
    printf("h2 size: %ld characters/bytes\n", sizeof(h2) ); 
	
	return 0;
}
