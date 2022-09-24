#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    for(i=1;i>0;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
            break;
        else if(a>b)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}
