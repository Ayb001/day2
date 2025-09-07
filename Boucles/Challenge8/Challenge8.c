#include <stdio.h>
int main() {
int n, i, arr[100], debut, fin, milieu, valeur, trouve = 0;
printf("Entrer le nombre d'éléments (max 100) : ");
scanf("%d", &n);
printf("Entrer %d elements triés : ", n);
for(i=0;i<n;i++) scanf("%d", &arr[i]);
printf("Entrer la valeur à chercher : ");
scanf("%d", &valeur);
debut=0; fin=n-1;
while(debut<=fin) {
milieu=(debut+fin)/2;
if(arr[milieu]==valeur) { trouve=1; break; }
else if(arr[milieu]<valeur) debut=milieu+1;
else fin=milieu-1;
}
if(trouve) printf("Valeur trouvée\n");
else printf("Valeur non trouvée\n");
return 0;
}