#include <stdio.h>
int main()
{
    int arr[50];
    int i=0;
    int a;
    int sup;
    printf("entrer le nombre des elements:");
    scanf("%d",&a);
    while(i<a)
    {
        printf("entrer T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    sup=arr[i];
    while(i<a)
    {
        if(arr[i]>sup)
        {
            sup=arr[i];
        }
        i++;
    }
    printf("le plus grand élément %d",sup);
}
