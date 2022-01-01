#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,s100,s50,s20,s10,s5,s2,s1;
    scanf("%d",&a);
    printf("%d\n",a);
    s100=a/100;
    printf("%d nota(s) de R$ 100,00\n",s100);
    b=a%100;
    s50=b/50;
    printf("%d nota(s) de R$ 50,00\n",s50);
    c=b%50;
    s20=c/20;
    printf("%d nota(s) de R$ 20,00\n",s20);
    d=c%20;
    s10=d/10;
    printf("%d nota(s) de R$ 10,00\n",s10);
    e=d%10;
    s5=e/5;
    printf("%d nota(s) de R$ 5,00\n",s5);
    f=e%5;
    s2=f/2;
    printf("%d nota(s) de R$ 2,00\n",s2);
    g=f%2;
    s1=g/1;
    printf("%d nota(s) de R$ 1,00\n",s1);
    return 0;
}
