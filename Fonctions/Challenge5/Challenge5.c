#include <stdio.h>

int factorielle(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int main() {
	int x = 5;
	printf("Factorielle de %d = %d\n", x, factorielle(x));
	return 0;
}
