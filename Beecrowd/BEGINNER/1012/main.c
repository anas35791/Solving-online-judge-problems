#include<stdio.h>
int main()
{
    double a,b,c,v,w,x,y,z;
    scanf("%lf %lf %lf",&a, &b, &c);
    v=.5*a*c;
    printf("TRIANGULO: %.3f\n", v);
    w=3.14159*c*c;
    printf("CIRCULO: %.3f\n",w);
    x=.5*(a+b)*c;
    printf("TRAPEZIO: %.3f\n",x);
    y=b*b;
    printf("QUADRADO: %.3f\n",y);
    z=a*b;
    printf("RETANGULO: %.3f\n",z);
    return 0;
}
