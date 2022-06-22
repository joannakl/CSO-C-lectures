#include <stdio.h>
#include </usr/include/fenv.h>
// compile using -lm option:
//   gcc  rounding.c -lm


int main () {

    printf( "rounding set to: %d\n\n", fegetround());
    printf( "FE_TONEAREST: %d\n", FE_TONEAREST);
    printf( "FE_UPWARD: %d\n", FE_UPWARD);
    printf( "FE_DOWNWARD: %d\n", FE_DOWNWARD);
    printf( "FE_TOWARDZERO: %d\n\n", FE_TOWARDZERO );



    float f = 0.1;
    printf("  0.1 = %20.10f\n", f);
    printf("  0.2 = %20.10f\n", f+f);
    printf("  0.3 = %20.10f\n", f+f+f);
    printf("  0.4 = %20.10f\n", f+f+f+f);
    printf("  0.5 = %20.10f\n", f+f+f+f+f);
    printf("  0.6 = %20.10f\n", f+f+f+f+f+f);

    float sum = 0.0;
    int i = 0, num = 0;

    for (num = 1; num <= 20; num++) {
        sum = 0.0;
        for (i = 0; i < num*1000; i++ )
            sum += f;

        printf("%5.0f = %20.10f\n", f*num*1000, sum);
    }
    
    printf("\n\n========================\n\n");

    sum = 0.0;
    for (i = 0; i < 10000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 1000., sum);
    sum = 0.0;
    for (i = 0; i < 100000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 10000., sum);

    printf("\n\n========================\n\n");

    fesetround( FE_UPWARD);
    printf( "rounding set to FE_UPWARD\n");
    sum = 0.0;
    for (i = 0; i < 10000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 1000., sum);
    sum = 0.0;
    for (i = 0; i < 100000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 10000., sum);

    printf("\n\n========================\n\n");

    fesetround( FE_DOWNWARD);
    printf( "rounding set to FE_DOWNWARD\n");
    sum = 0.0;
    for (i = 0; i < 10000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 1000., sum);
    sum = 0.0;
    for (i = 0; i < 100000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 10000., sum);

    printf("\n\n========================\n\n");

    fesetround( FE_TONEAREST);
    printf( "rounding set to FE_TONEAREST\n");
    sum = 0.0;
    for (i = 0; i < 10000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 1000., sum);
    sum = 0.0;
    for (i = 0; i < 100000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 10000., sum);

    printf("\n\n========================\n\n");

    fesetround( FE_TOWARDZERO);
    printf( "rounding set to FE_TOWARDZERO\n");
    sum = 0.0;
    for (i = 0; i < 10000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 1000., sum);
    sum = 0.0;
    for (i = 0; i < 100000; i++ )
        sum += f;
    printf("%5.0f = %20.10f\n", 10000., sum);



    return 0;

}
