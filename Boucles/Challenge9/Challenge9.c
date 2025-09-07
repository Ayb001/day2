#include <stdio.h>
int main() {
int base, expo;
long long res=1;
printf("Entrer la base : ");
scanf("%d", &base);
printf("Entrer l'exposant : ");
scanf("%d", &expo);
while(expo>0){ res*=base; expo--; }
printf("Résultat = %lld\n", res);
return 0;
}