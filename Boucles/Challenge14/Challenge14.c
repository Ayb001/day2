#include <stdio.h>
#include <string.h>
int main(){
char jours[7][10] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
char selection[10];
int i, trouve=0;
printf("Jours de la semaine :\n");
for(i=0;i<7;i++) printf("%s\n", jours[i]);
printf("Choisir un jour : ");
scanf("%s", selection);
for(i=0;i<7;i++){ if(strcmp(selection, jours[i])==0){ trouve=i; break; } }
printf("Jours à venir :\n");
for(i=trouve;i<7;i++) printf("%s\n", jours[i]);
}