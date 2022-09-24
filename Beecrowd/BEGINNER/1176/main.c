#include <stdio.h>

int main()
{
    unsigned long long int x[100],a=0,b=1,i,n,t,m;
    for(i=0;i<100;i++)
    {
        x[i]=a;
        t=a+b;
        a=b;
        b=t;
    }
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&m);
        printf("Fib(%llu) = %llu\n",m,x[m]);
    }

    return 0;
}
