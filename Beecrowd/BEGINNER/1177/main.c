#include <stdio.h>

int main()
{
    int i,j,n,s=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        if(s==n)
        {s=0;}
        printf("N[%d] = %d\n",i,s);
        s=s+1;
    }
    return 0;
}
