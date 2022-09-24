#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,j,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a%2==0)
            a=a+1;
        for(j=0;j<b;j++)
        {
            s=s+a;
            a=a+2;
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
