#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x=0,y=0;
    int i;
    for(i=0;i<=10;i++)
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
    printf("media = %.2f\n",(x+y)/2);

    return 0;

}
