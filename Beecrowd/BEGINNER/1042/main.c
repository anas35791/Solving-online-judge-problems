#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    printf("%d\n",a);
    else if(b<a&&b<c)
    printf("%d\n",b);
    else
    printf("%d\n",c);
    if(a>b&&c>a||a>c&&a<b)
    printf("%d\n",a);
    else if(b>c&&a>b||b<c&&b>a)
    printf("%d\n",b);
    else
    printf("%d\n",c);
    if(a>b&&a>c)
    printf("%d\n", a);
    else if(c>b&&c>a)
    printf("%d\n", c);
    else
    printf("%d\n", b);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
