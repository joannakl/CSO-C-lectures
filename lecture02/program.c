#include <stdio.h>
/*
 * THIS PROGRAM SHOWS WHAT NOT TO DO. 
 * DO NOT WRITE CODE LIKE THIS.
 */ 
 
extern int counter;
void add_one();
void subtract();

int main() {
    printf("counter is %d\n", counter);
    add_one();
    add_one();
    printf("counter is %d\n", counter);
    subtract();
    printf("counter is %d\n", counter);
    add_one();
    subtract(); 
    printf("counter is %d\n", counter);
    return 0;
}
