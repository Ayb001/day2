#include <stdio.h>
int main()
{
    int i=2;
    int j;
    int n;
    int premier;
    printf("entrer n:");
    scanf("%d",&n);
    while(i<=n)
    {
        premier=1;
        j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                premier=0;
                break;
            }
            j++;
        }
        if(premier==1)
        {
            printf("%d/",i);
        }
        i++;
    }
}
