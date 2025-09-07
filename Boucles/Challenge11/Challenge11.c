#include <stdio.h>
int main(){
int n, count=0;
double sum=0;
printf("Entrer les nombres positifs, terminez par 0 :\n");
do{ scanf("%d", &n); if(n!=0){ sum+=n; count++; } }while(n!=0);
if(count>0) printf("Moyenne = %.2lf\n", sum/count);
else printf("Aucun nombre entré\n");
return 0;
}