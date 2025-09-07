#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int n, i;
char motdepasse[100];
const char charset[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
printf("Entrer la longueur du mot de passe : ");
scanf("%d", &n);
srand(time(NULL));
for(i=0;i<n;i++) motdepasse[i]=charset[rand()%62];
motdepasse[n]='\0';
printf("Mot de passe : %s\n", motdepasse);
return 0;
}