#include<stdio.h>
int main()
{
    int a,b,c,s100,s50,s20;
    scanf("%d",&a);
    s100=a/365;
    b=a%365;
    s50=b/30;
    c=b%30;
    printf("%d ano(s)\n",s100);
     printf("%d mes(es)\n",s50);
      printf("%d dia(s)\n",c);
    return 0;
}
