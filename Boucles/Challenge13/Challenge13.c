#include <stdio.h>
int main(){
int n,i,sum=0;
printf("Entrer un nombre : ");
scanf("%d", &n);
for(i=1;i<=10;i++){ printf("%d * %d = %d\n", n,i,n*i); sum+=n*i; }
printf("Somme des produits = %d\n", sum);
return 0;
}