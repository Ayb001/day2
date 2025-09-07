#include <stdio.h>

int fibonacci(int n) {
	if (n <= 1) return n;
	int a = 0, b = 1, temp;
	for (int i = 2; i <= n; i++) {
		temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main() {
	int x = 7;
	printf("Fibonacci terme %d = %d\n", x, fibonacci(x));
	return 0;
}
