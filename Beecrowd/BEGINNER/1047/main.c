#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,k,l;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a*60+b;
    f=c*60+d;
    g=f-e;
    if(g<0)
    g=g+1440;
    if(g==0)
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(g<60)
    printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",g);
    else
    {k=g/60;
    l=g%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",k,l);}
    return 0;
}
