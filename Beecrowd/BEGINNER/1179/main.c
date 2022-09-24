#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],k=0,i,s=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
        }
    for(i=0;i<15;i++)
    {if(a[i]%2==0)
            {
                printf("par[%d] = %d\n",s,a[i]);
                s=s+1;
                if(s==5)
             {
                 s=0;
             }}}
    for(i=0;i<15;i++)
    {if(a[i]%2!=0)
            {printf("impar[%d] = %d\n",k,a[i]);
            k=k+1;
             if(k==5)
             {
                 k=0;
             }}
    }
    return 0;
}
