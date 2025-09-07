#include <stdio.h>

int maximum(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int x = 10, y = 15;
	printf("Maximum entre %d et %d = %d\n", x, y, maximum(x, y));
	return 0;
}
