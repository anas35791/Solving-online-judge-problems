#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x=0,y=0,d,m=0,n=0,q,r;
    int i,j;
    {for(i=0;i<=10;i++)
    {
        scanf("%f",&a);
        if(a<0||a>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            x=x+a;
            break;
        }

    }
    for(i=0;i<=10;i++)
    {
        scanf("%f",&b);
        if(b<0||b>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            y=y+b;
            break;
        }
    }
    printf("media = %.2f\n",(x+y)/2);}
    for(j=0;j<100000;j++)
    {printf("novo calculo (1-sim 2-nao)\n");
     scanf("%f",&d);
     if(d==1)
     {
         for(i=0;i<=10;i++)
    {
        scanf("%f",&a);
        if(a<0||a>10)
        {
            printf("nota invalida\n");
        }
        else
        {

            q=m+a;
            break;
        }

    }
    for(i=0;i<=10;i++)
    {
        scanf("%f",&b);
        if(b<0||b>10)
        {
            printf("nota invalida\n");
        }
        else
        {

            r=n+b;
            break;
        }
    }
    printf("media = %.2f\n",(q+r)/2);
     }
     else if(d==2)
     {break;}
    }
    return 0;

}
