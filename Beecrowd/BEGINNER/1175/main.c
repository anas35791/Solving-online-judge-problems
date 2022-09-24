#include <stdio.h>

int main()
{
    int a[20],i,s=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=19;i>=0;i--)
    {
        printf("N[%d] = %d\n",s,a[i]);
        s=s+1;
    }
    return 0;
}
