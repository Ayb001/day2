#include <stdio.h>
int main() {
int n, inv = 0;
printf("Entrer un entier : ");
scanf("%d", &n);
while (n != 0) {
inv = inv * 10 + n % 10;
n /= 10;
}
printf("Entier inversé = %d\n", inv);
return 0;
}