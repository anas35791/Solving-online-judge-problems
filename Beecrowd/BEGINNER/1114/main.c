#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for(b=1;b>0;b++)
    {
        scanf("%d",&a);
        if(a==2002)
            {printf("Acesso Permitido\n");
            break;}
        else
            printf("Senha Invalida\n");
    }
    return 0;
}
