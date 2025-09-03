#include <stdio.h>
int main()
{
    int fact;
    int a;
    int i=0;
    int arr[100];
    printf("entrer combien d elemnet:");
    scanf("%d",&a);
    printf("entrer le fact:");
    scanf("%d",&fact);
    while(i<a)
    {
        printf("entrer T[%d]:",i+1);
        scanf("%d",&arr[i]);
        arr[i]=arr[i]*fact;
        i++;
    }
    i=0;
    printf("les element est :\n");
    while(i<a)
    {
        printf("T[%d]=%d \n",i+1,arr[i]);
        i++;
    }
}
