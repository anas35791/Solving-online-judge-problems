#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        if(a%i==0)
        {
            s=a/i;
            printf("%d\n",s);
        }
    }
    return 0;
}
