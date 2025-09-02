#include <stdio.h>
int main()
{
    int arr[50];
    int i=0;
    int a;
    printf("entrer nombre des element:");
    scanf("%d",&a);
    while(i<a)
    {
        printf("entrer T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    printf("votre tableau est: \n");
    i=0;
    while(i<a)
    {
        printf("T[%d]:%d \n",i+1,arr[i]);
        i++;
    }
}
