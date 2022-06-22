#include <stdio.h>
#include <stdlib.h>
/*
 * This program shows the use of simple functions in C
 * as well as use of the command line arguments.
 *
 * WARNING: this program does not work if either
 * of the numbers is negative. Can you fix it?
 *
 * author: Joanna Klukowska
 *
 */

/*
 * computes the remainder from dividing x by divisor,
 * i.e., x%divisor
 * preconditions:  x > 0, divisor > 0
 */
int modulo(int x, int divisor, int rec);




int main(int argc, char ** argv )
{
    if (argc < 3) {
        printf("Error: insufficient arguments. \n\n");
        printf("Usage: modulo arg1  arg2 \n\n");
        return -1;
    }

    int x = atoi( argv[1] ) ;
    int divisor = atoi( argv[2] ) ;
    printf("%d mod %d = %d\n", x, divisor, modulo(x,divisor, 1));

    return 0;
}


/*
 * computes the remainder from dividing x by divisor,
 * i.e., x%divisor
 * WARNING: fails in some cases
 */
int modulo(int x, int divisor, int rec )
{
    if (!rec) { /* iterative version */
        while (x >= divisor) {
            x -= divisor;
        }
        return x;
    }
    else {   /* recursive version */
        if (x < divisor)
            return x;
        else
            return modulo(x - divisor, divisor, rec);
    }
}
