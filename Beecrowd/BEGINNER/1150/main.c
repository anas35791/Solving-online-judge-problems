#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,n,s=0,k=0;
    scanf("%d",&a);
    for(j=1; j>0; j++)
    {
        scanf("%d",&n);
        if(n<=a) {continue;}
        else
        {
            for(i=a;i>=a;i++)
            {
                s=s+i;
                k++;
                if(s>n)
                    break;
            }
            printf("%d\n",k);
            break;

        }
        }
    return 0;
}
