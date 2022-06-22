#include <stdio.h>
#include "arrays.h" 

#define SIZE  5

int sum ( int array[], int size);

int main () {
    int list1[SIZE] = {3, 90, -12323121, 45, -21};
    int list2[SIZE] = {123 };
    print_int_array(list1, SIZE);
    print_int_array(list2, SIZE); 
    return 0;
}

int sum ( int array[], int size) {
    int i = 0;
    int sum = 0; 
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum; 
}


