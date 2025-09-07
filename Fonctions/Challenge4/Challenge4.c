#include <stdio.h>

int minimum(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int x = 10, y = 15;
	printf("Minimum entre %d et %d = %d\n", x, y, minimum(x, y));
	return 0;
}
