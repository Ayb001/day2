#include <stdio.h>
int main()
{
    int i=0;
    int arr[]={1, 2, 3, 4, 5};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    while(i<len)
    {
        printf("%d",arr[i]);
        i++;
    }
}
