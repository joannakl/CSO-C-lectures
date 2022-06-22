
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Displays individual bytes of a floating point number provided as a command line argument. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


#include "show-bytes.h"



int main(int argc, char *argv[])
{
    float val;
    if (argc > 1) {
        val =   (float) ( atof( argv[1] ) );
        printf("calling show_bytes\n");
        show_float( val );
    } else {
        printf("ERROR: missing arguments\n");
        printf("Usage: %s float-value-to-display\n", argv[0] );
    }
    return 0;
}

