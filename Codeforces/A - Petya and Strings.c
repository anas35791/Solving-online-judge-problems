#include <stdio.h>
#include <string.h>

int main()
{
    char a[101],b[101];
    int i,s=0,k=0;
    scanf("%s%s",&a,&b);
    strupr(a);
    strupr(b);
    if(strcmp(a,b)==0)
    printf("0\n");
    else if(strcmp(a,b)==1)
    printf("1");
    else if(strcmp(a,b)==-1)
    printf("-1");
    return 0;
}
