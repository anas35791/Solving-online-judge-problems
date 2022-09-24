#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,c,d;
    for(i=1;i>0;i++)
    {
        scanf("%d %d",&a,&b);

        if(a<b&&a>0&&b>0)
        {
            d=0;
            for(c=a;c<=b;c++)
            {
                printf("%d ",c);
                d=d+c;
            }
            printf("Sum=%d\n",d);
        }
        else if(a>b&&a>0&&b>0)
        {
            d=0;
            for(c=b;c<=a;c++)
            {
                printf("%d ",c);
                d=d+c;
            }
            printf("Sum=%d\n",d);
        }

        else if(a<=0||b<=0)
        {
            break;
        }
    }
    return 0;
}
