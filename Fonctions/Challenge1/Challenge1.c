#include <stdio.h>

int somme(int a, int b) {
	return a + b;
}

int main() {
	int x = 5, y = 7;
	printf("Somme de %d et %d = %d\n", x, y, somme(x, y));
	return 0;
}
