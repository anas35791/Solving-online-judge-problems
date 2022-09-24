#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=0;i<10000;i++)
    {
        k=(i*n)+2;
        if(k>10000)
            break;
        printf("%d\n",k);

    }
    return 0;
}
