#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,d=0,e=0,f=0;
    for(i=1;i>0;i++)
    {
        scanf("%d",&a);
        if(a<5)
        {
            if(a==1)
            {
                d=d+1;
            }
            else if(a==2)
                {e=e+1;
                }
            else if(a==3)
                {f=f+1;
                }
            else
                break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",d);
    printf("Gasolina: %d\n",e);
    printf("Diesel: %d\n",f);

    return 0;
}
