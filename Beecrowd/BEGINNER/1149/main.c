#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,n,s=0;
    scanf("%d",&a);
    for(i=0; i>=0; i++)
    {
        scanf("%d",&n);
        if(n<=0) {continue;}
        else
        {
            for(j=a;j<a+n;j++)
            {
                s=s+j;
            }
            printf("%d\n",s);
            break;
        }}
    return 0;
}
