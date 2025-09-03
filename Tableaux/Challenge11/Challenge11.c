#include <stdio.h>
int main()
{
    int a;
    int i=0;
    int x;
    int t;
    int arr[100];
    printf("entrer nombre d element:");
    scanf("%d",&a);
    printf("entrer l element a chercher:");
    scanf("%d",&x);
    printf("entrer la nouvelle valeur:");
    scanf("%d",&t);
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
            arr[i]=t;
        }
        i++;
    }
    i=0;
    printf("les element du teableau:\n");
    while(i<a)
    {
        printf("T[%d]:%d\n",i+1,arr[i]);
        i++;
    }
}
