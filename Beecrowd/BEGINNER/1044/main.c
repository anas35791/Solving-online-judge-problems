#include<stdio.h>
int main()
{
    float a,b,c;
    int d;
    scanf("%f%f",&a,&b);
    if(b>a)
    {c=b/a;
    d=b/a;}
    else
    {
        c=a/b;
        d=a/b;
    }
    if(c==d)
    printf("Sao Multiplos\n");
    else
    printf("Nao sao Multiplos\n");

    return 0;
}
