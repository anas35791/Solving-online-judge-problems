#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf",&x);
    int n= x, r, a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,s,t,u,v,w,y;
    r=(x-n)*100;
    printf("NOTAS:\n");
    a=n/100;
    printf("%d nota(s) de R$ 100.00\n",a);
    b=n%100;
    c=b/50;
    printf("%d nota(s) de R$ 50.00\n",c);
    d=b%50;
    e=d/20;
    printf("%d nota(s) de R$ 20.00\n",e);
    f=d%20;
    g=f/10;
    printf("%d nota(s) de R$ 10.00\n",g);
    h=f%10;
    i=h/5;
    printf("%d nota(s) de R$ 5.00\n",i);
    j=h%5;
    k=j/2;
    printf("%d nota(s) de R$ 2.00\n",k);
    printf("MOEDAS:\n");
    l=j%2;
    printf("%d moeda(s) de R$ 1.00\n",l);
    o=r/50;
    printf("%d moeda(s) de R$ 0.50\n",o);
    p=r%50;
    q=p/25;
    printf("%d moeda(s) de R$ 0.25\n",q);
    s=p%25;
    t=s/10;
    printf("%d moeda(s) de R$ 0.10\n",t);
    u=s%10;
    v=u/5;
    printf("%d moeda(s) de R$ 0.05\n",v);
    w=u%5;
    printf("%d moeda(s) de R$ 0.01\n",w);





    return 0;
}
