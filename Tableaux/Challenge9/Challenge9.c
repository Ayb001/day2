#include <stdio.h>
int main()
{
    int a;
    int i=0;
    int j;
    int temp;
    int arr[100];
    printf("entrer nombre d element:");
    scanf("%d",&a);
    j=a-1;
    printf("entrer les elements du tableau:\n");
    while(i<a)
    {
        printf("T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<(a/2))
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    i=0;
    printf("inverse des elements :\n");
    while(i<a)
    {
        printf("T[%d]:%d\n",i+1,arr[i]);
        i++;
    }
}
