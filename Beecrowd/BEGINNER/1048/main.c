#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n,i,g;
    scanf("%lf",&n);
    if(n>=0&&n<=400)
        {i=n+(n*.15);
        g=i-n;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",g);
        printf("Em percentual: 15 %c\n",'%');}

    else if(n>400&&n<=800)
        {i=n+(n*(.12));
        g=i-n;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",g);
        printf("Em percentual: 12 %c\n",'%');}

    else if(n>800&&n<=1200)
        {i=n+(n*(.1));
        g=i-n;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",g);
        printf("Em percentual: 10 %c\n",'%');}
    else if(n>1200&&n<=2000)
        {i=n+(n*(.07));
        g=i-n;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",g);
        printf("Em percentual: 7 %c\n",'%');}
    else
    {i=n+(n*(.04));
        g=i-n;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",g);
        printf("Em percentual: 4 %c\n",'%');}
    return 0;
}
