#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s=0;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        if(n%2!=0)
            n=n+1;

        for(j=0;j<5;j++)
        {
            s=s+n;
            n=n+2;
            }
            printf("%d\n",s);
            s=0;
    }
    return 0;
}
