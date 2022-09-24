#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,b=0,c=0,d=0;
    scanf("%d",&a);
    int n[a][2]; char g[a][2];
    for(i=0;i<a;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%d",&n[i][j]);
        }
        for(j=0;j<2;j++)
        {
            scanf("%c",&g[i][j]);
            if(g[i][1]=='C')
                b=b+n[i][0];
            if(g[i][1]=='R')
                c=c+n[i][0];
            if(g[i][1]=='S')
                d=d+n[i][0];
        }
    }
    float x;
    x=b+c+d;
    printf("Total: %.0f cobaias\n",x);
    printf("Total de coelhos: %d\n",b);
    printf("Total de ratos: %d\n",c);
    printf("Total de sapos: %d\n",d);
    printf("Percentual de coelhos: %.2f %c\n",(b/x)*100,'%');
    printf("Percentual de ratos: %.2f %c\n",(c/x)*100,'%');
    printf("Percentual de sapos: %.2f %c\n",(d/x)*100,'%');

    return 0;
}
