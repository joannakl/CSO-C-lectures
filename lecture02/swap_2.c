#include <stdio.h>

/* This is the second attempt to write a swap() function that 
 * swaps the values of its two integer parameters.
 * 
 * Author: Joanna Klukowska
 */ 
void swap(int *x, int *y);

int main()
{
	int x = 1;
	int y = 2;
	printf("x=%d, y=%d\n", x, y);
	swap(&x, &y);
	printf("x=%d, y=%d\n", x, y);
	return 0;
}

//swaps values of x and y

void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

