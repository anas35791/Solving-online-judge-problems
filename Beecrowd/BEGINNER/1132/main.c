#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,c=0;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(i=a;i<=b;i++)
         {
             if(i%13!=0)
                c=c+i;
         }
    }
    else
    {
        for(i=b;i<=a;i++)
         {
             if(i%13!=0)
                c=c+i;
         }

    }
    printf("%d\n",c);
    return 0;
}
