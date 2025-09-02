#include <stdio.h>
int main()
{
    int arr[50];
    int i=0;
    int x;
    int sum=0;

    printf("entrer nombre d element:");
    scanf("%d",&x);

    while(i<x)
    {
        printf("T[%d]:",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        i++;
    }
    printf("%d",sum);
}
