#include <stdio.h>

int multiplication(int a, int b) {
	return a * b;
}

int main() {
	int x = 4, y = 6;
	printf("Multiplication de %d et %d = %d\n", x, y, multiplication(x, y));
	return 0;
}
