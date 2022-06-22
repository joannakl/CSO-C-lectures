#include <stdio.h>

/*
 * This program illustrates some potential problems
 * resulting from the use of global variables.
 * The variable x can modified and accessed by all three
 * functions in this program - as the programs/functions
 * get larger, it becomes harder to trace the parts
 * of the program in which the values are modified.
 *
 * Avoid using globals, unless they are constants!
 *
 * Author: Joanna Klukowska
 *
 */

int x;
int y = 5;

void foo1(int y) {
    x = 20;
    y++;
}

void foo2(int x) {
    x++;
    y = 50;
}

void bar() {
    x = 1;
    y = 9;
    foo2(x);

}

int main() {
  //we have not even given a value to x yet
	printf("x=%i\ty=%i\n", x, y);

	foo1(x);
	printf("x=%i\ty=%i\n", x, y);

	foo2(x);
	printf("x=%i\ty=%i\n", x, y);

	bar();
	printf("x=%i\ty=%i\n", x, y);

	return 0;
}
