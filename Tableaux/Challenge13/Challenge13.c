#include <stdio.h>
int main()
{
    int a;
    int i=0;
    int j=0;
    int arr[100];
    printf("entrer nombre d element:");
    scanf("%d",&a);
    printf("entrer les elements du tableau:\n");
    while(i<a)
    {
        printf("T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    printf("les element paire est :\n");
    while(i<a)
    {
        if(arr[i]%2!=0)
        {
            printf("T[%d]:%d\n",j+1,arr[i]);
            j++;
        }
        i++;
    }
}
