
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Displays individual bytes of a string provided as a command line argument. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


#include "show-bytes.h"



int main(int argc, char *argv[])
{
    int val = 12345;

    if (argc > 1) {
        printf("calling show_bytes\n");
        show_string( argv[1] );
    } else {
        printf("ERROR: missing arguments\n");
        printf("Usage: %s string-to-display\n", argv[0] );
    }
    return 0;
}

