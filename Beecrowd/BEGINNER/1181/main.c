#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,a;
    float n[12][12],s=0;
    char c;
    scanf("%d %c",&a,&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&n[i][j]);
        }
    }
    if(c=='S')
    {
        for(k=0;k<12;k++)
        {
            s=s+n[a][k];
        }
        printf("%.1f\n",s);
    }
    if(c=='M')
    {
        for(k=0;k<12;k++)
        {
            s=s+n[a][k];
        }
        printf("%.1f\n",s/12);
    }

    return 0;
}
