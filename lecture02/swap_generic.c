#include <stdio.h>
/*
 * This program illustrates function that allows "generic" swaping
 * of values pointed two by any types of pointers.
 *
 *
 * Author: Joanna Klukowska
 *
 */

void swap(void *item1, void *item2, int size) ;

int main()
{
	int x = 1;
	int y = 2;
	printf("x=%d, y=%d\n", x, y);
	swap(&x, &y, sizeof(x) );
	printf("x=%d, y=%d\n", x, y);
	printf("===================\n");

	double a = 3.1415;
	double b = 2.718;
	printf("a=%f, b=%f\n", a, b);
	swap(&a, &b, sizeof(a) );
	printf("a=%f, b=%f\n", a, b);
	printf("===================\n");

	//the following lines violate the precondition of
	//the swap function
	//what do you think happens?
	int m = 3;
	float n = 2.718;
	printf("m=%d, n=%f\n", m, n);
	swap(&m, &n, sizeof(m) );
	printf("m=%d, n=%f\n", m, n);
	swap(&m, &n, sizeof(m) );
	printf("m=%d, n=%f\n", m, n);
	printf("===================\n");

	//the following lines violate the precondition of
	//the swap function
	//what do you think happens?
	int i = -200000;
	int j = 60000;
	printf("i=%d, j=%d\n", i, j);
	swap(&i, &j, 1 );
	printf("i=%d, j=%d\n", i, j);
	swap(&i, &j, 1 );
	printf("i=%d, j=%d\n", i, j);
	printf("===================\n");



	return 0;
}

/**
 * swaps values pointed to by item1 and item2
 * item1 - pointer to a variable / data structure
 * item2 - pointer to a variable / another data structure of the same type as
 *         item1
 * size - number of bytes used for storying item1 (and item2)
 *
 * preconditions:
 * - the values stored in locations pointed to by item1 and item2 are of the same types
 * - the size parameter should match the number of bytes in the variable pointed to by item1
 */
void swap(void *item1, void *item2, int size) {

	// cast to char* which is 1 byte in size
	char *x = (char *)item1;
	char *y = (char *)item2;

	char tmp;  // 1 byte of storage

	int i;
	for (i = 0; i < size; i++) {
		// for every byte: swap the byte
		tmp = x[i];
		x[i] = y[i];
		y[i] = tmp;
	}
}
