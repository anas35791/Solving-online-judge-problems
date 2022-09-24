#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d\n",s);
    return 0;
}
