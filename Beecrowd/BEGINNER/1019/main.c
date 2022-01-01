#include<stdio.h>
int main()
{
    int a,b,c,s100,s50,s20;
    scanf("%d",&a);
    s100=a/3600;
    b=a%3600;
    s50=b/60;
    c=b%60;
    printf("%d:%d:%d\n",s100,s50,c);
    return 0;
}
