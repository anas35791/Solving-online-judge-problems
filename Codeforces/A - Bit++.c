#include <stdio.h>
#include <string.h>

int main()
{
    int o,n,g=0;
    char a[4];
    scanf("%d",&n);
    {for(o=1;o<=n;o++)
    {
        scanf("%s",&a);
        if(a[0]=='+'||a[1]=='+'||a[2]=='+')
            g++;
        else if(a[0]=='-'||a[1]=='-'||a[2]=='-')
            g--;
    }
    printf("%d",g);}
    return 0;
}
