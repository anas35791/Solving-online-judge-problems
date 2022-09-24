#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s=0,j=0;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else
        {
            j++;
            s=s+a;
        }
    }
    float q,r;
    q=s;
    r=j;
    printf("%.2f\n",q/r);
    return 0;
}
