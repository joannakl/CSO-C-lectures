
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Header file for functions that print to standard
 * output the hexadecimal representation of bytes for
 * data of various types. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


typedef unsigned char *byte_pointer;


/* Given a pointer to the data and the number
 * of bytes, prints len many bytes: one byte at a time.
 */ 
void show_bytes(byte_pointer start, int len);


/* Print to standard output the bytes of an int. */
void show_int(int x);

/* Print to standard output the bytes of a float. */
void show_float(float x) ;

/* Print to standard output the bytes of a pointer. */
void show_pointer(void *x) ;

/* Print to standard output the bytes of a char. */
void show_string(char *x);



