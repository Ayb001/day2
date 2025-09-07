#include <stdio.h>

int est_pair(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int main() {
	int x = 8;
	if (est_pair(x))
		printf("%d est pair\n", x);
	else
		printf("%d est impair\n", x);
	return 0;
}
