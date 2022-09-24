#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,k,j,m,p;
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=0;k<100;k++)
    {
        m=a[k];
        p=k;
        for(j=0;j<100;j++)
        {
            if(m>a)
            {
                m=a[j];
                p=j;
            }
        }
    }
    printf("%d\n%d\n",m,p+1);
    return 0;
}
