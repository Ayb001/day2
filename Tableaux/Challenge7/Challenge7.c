#include <stdio.h>
int main()
{
    int a;
    int arr[100];
    int temp;
    int i=0;
    int j;
    printf("entrer nombre d element :");
    scanf("%d",&a);
    printf("entrer les element du tableau:\n");
    while(i<a)
    {
        printf("entrer T[%d]:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<a)
    {
        j=i+1;
        while(j<a)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
        i++;
    }
    printf("les selements du tableau apre le tro :\n");
    i=0;
    while(i<a)
    {
        printf("T[%d]=%d \n",i+1,arr[i]);
        i++;
    }
}
