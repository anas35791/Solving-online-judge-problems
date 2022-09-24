#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[10],i,n,j;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {

        X[i]=n;
        printf("N[%d] = %d\n",i,X[i]);
        n=n*2;

    }
    return 0;
}
