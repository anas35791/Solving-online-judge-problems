#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s,n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);

    for(i=a;i>1;i--)
    {
        if(a%i==0)
        {
            s=a/i;
        }
    }
    if(s==1)
            {printf("%d eh primo\n",a);
            }
        else
            {printf("%d nao eh primo\n",a);
            }
    }
    return 0;
}
