#include<stdio.h>
int main()
{
    char str[10];
    double b,c,d;
    scanf("%s",&str);
    scanf("%lf",&b);
    scanf("%lf",&c);
    d=(c*.15)+b;
    printf("TOTAL = R$ %.2f\n",d);
    return 0;
}
