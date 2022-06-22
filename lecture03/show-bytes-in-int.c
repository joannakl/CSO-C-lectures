
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Displays individual bytes of an integer provided as a command line argument. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 

#include "show-bytes.h"



int main(int argc, char *argv[])
{
    int val = 0;

    if (argc > 1) {
        if (argc > 1) {
            val = atoi( argv[1] );
        }
        printf("calling show_bytes\n");
        show_int(val);
    } else {
        printf("ERROR: missing arguments\n");
        printf("Usage: %s int-value-to-display\n", argv[0] );
    }
    return 0;
}

