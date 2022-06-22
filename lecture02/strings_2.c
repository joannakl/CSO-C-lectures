#include <stdio.h>
/*
 * This program illustrates the use of c-strings.
 * Strings in C are null terminated arrays of characters.
 * (You can have arrays of characters that are not null terminated,
 * but they are not strings and they will not work with any of the
 * functions that are designed for strings.)
 * When allocating memory for strings we have to make
 * sure that there is room for the null character '\0' 
 * at the end. 
 * 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 

int main () {
    //these are character arrays, but they are NOT strings since there
    //is no null terminator - we only allocated 5 slots for characters
    //and entered 5 letters into those slots
    char s0[5] = {'h', 'e', 'l', 'l', 'o'};
    //or
    char s1[5] = "hello";
    
    
    //this is a string - we explicetely specify the terminating null 
    //character
    char s2[6] = "hello\0";
	
    //we do not need to add the null character manually
    //the compiler will automatically do this 
    char s3[6] = "hello"; 
    
    //in fact, we do not even need to specify the size, 
    //the compiler can decide on its own to allocate enough memory
    //to have room for all the characters and the null termiator
    char s4[] = "hello";  
    
    //unfortunatelly sometimes the character array that is not a string
    //can act like a string for a while - but not for long and sooner or 
    //later we will run into some problems 
	printf("s0: %s\n", s0);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
    
	return 0;
}
