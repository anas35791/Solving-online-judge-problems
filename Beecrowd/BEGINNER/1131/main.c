#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x=0,y=0,d,m=0,j;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        x=x+1;
    }
    else if(b>a)
    {
        y=y+1;
    }
    else
    {
        m=m+1;
    }
    for(j=0;j<100000;j++)
    {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&d);
        if(d==1)
        {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b)
        {
        x=x+1;
        }
        else if(b>a)
        {
        y=y+1;
        }
         else
        {
        m=m+1;
        }
        }
        else if(d==2)
        {break;}
    }
    printf("%d grenais\n",x+y+m);
    printf("Inter:%d\n",x);
    printf("Gremio:%d\n",y);
    printf("Empates:%d\n",m);
    if(x>y)
        printf("Inter venceu mais\n");
    else if(x<y)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;

}
