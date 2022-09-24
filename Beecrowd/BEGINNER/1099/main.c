#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    int n[a][2];
    for(b=0;b<a;b++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&n[b][c]);
        }
        if(n[b][0]<n[b][1]&&n[b][1]-n[b][0]!=1)
        {
            e=0;
            for(d=n[b][0]+1;d<n[b][1];d++)
            {
                if(d%2!=0)
                    e=e+d;
            }
            printf("%d\n",e);
        }
        else if(n[b][0]>n[b][1]&&n[b][0]-n[b][1]!=1)
        {
            e=0;
            for(d=n[b][1]+1;d<n[b][0];d++)
            {
                if(d%2!=0)
                    e=e+d;
            }
            printf("%d\n",e);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
