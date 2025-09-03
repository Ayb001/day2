#include <stdio.h>
int main()
{
    int a;
    int x;
    int arr[100];
    int i=0;
    int c=0;
    printf("entrer nombre d element:");
    scanf("%d",&a);
    printf("entrer l element a rechercher:");
    scanf("%d",&x);
    printf("entrer les elements du tableau:\n");
    while(i<a)
    {
        printf("T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<a)
    {
        if(arr[i]==x)
        {
            c=1;
        }
        i++;
    }
    if(c==0)
    {
        printf("pas delement");
    }
    else
    {
        printf("l element est au sein du tableau");
    }
}
