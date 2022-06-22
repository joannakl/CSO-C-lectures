#include <stdio.h>

int x;
void foo(int y) {
        y++;
}
void bar() {
        x = 1; /* wrong*/
}

int main() {
	printf("x=%i\n", x);

	foo(x);
	printf("x=%i\n", x);

	bar();
	printf("x=%i\n", x);

	return 0;
}
