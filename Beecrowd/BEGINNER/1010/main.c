#include<stdio.h>
int main()
{
    int a,b,x,y;
    double c,d,e;
    scanf("%d %d %lf",&a, &b, &c);
    scanf("%d %d %lf",&x, &y, &d);
    e=b*c+y*d;
    printf("VALOR A PAGAR: R$ %.2f",e);
    printf("\n");
    return 0;
}
