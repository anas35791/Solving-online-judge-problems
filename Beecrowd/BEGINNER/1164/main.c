#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s,n,k=0,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);

    for(i=a;i>1;i--)
    {
        if(a%i==0)
        {
            s=a/i;
            k=k+s;
        }
    }
    if(k==a)
            {printf("%d eh perfeito\n",a);
            k=0;}
        else
            {printf("%d nao eh perfeito\n",a);
            k=0;}
    }
    return 0;
}
