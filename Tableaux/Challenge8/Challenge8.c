#include <stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int a;
    int i=0;
    printf("entrer nombre d element:");
    scanf("%d",&a);
    printf("entrer les elements du tableau : \n");
    while(i<a)
    {
        printf("T1[%d]:",i+1);
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
        i++;
    }
    printf("le premier tableau:\n");
    i=0;
    while(i<a)
    {
        printf("T1[%d]:%d \n",i+1,arr1[i]);
        i++;
    }
    printf("le deuxieme tableau :\n");
    i=0;
    while(i<a)
    {
        printf("T2[%d]:%d \n",i+1,arr2[i]);
        i++;
    }
}
