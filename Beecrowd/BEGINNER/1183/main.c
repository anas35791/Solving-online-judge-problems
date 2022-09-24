#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float n[12][12],s=0,q=1;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&n[i][j]);
        }
    }
    if(c=='S')
    {
        for(i=0;i<11;i++)
        {
            for(j=q;j<12;j++)
            {
                s=s+n[i][j];
            }
            q=q+1;
        }
        printf("%.1f\n",s);
    }
    if(c=='M')
    {
        for(i=0;i<11;i++)
        {
            for(j=q;j<12;j++)
            {
                s=s+n[i][j];
            }
            q=q+1;
        }
        printf("%.1f\n",s/66);
    }

    return 0;
}
