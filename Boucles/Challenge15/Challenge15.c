#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Entrer un nombre entier positif : ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les nombres négatifs.\n");
        return 1;
    }

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %llu\n", n, fact);

    return 0;
}
