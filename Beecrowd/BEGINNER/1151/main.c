#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,i,n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
        printf("%d ",a);
        t=a+b;
        a=b;
        b=t;}
        else
        {

        printf("%d\n",a);
        t=a+b;
        a=b;
        b=t;}
        }

    return 0;
}
