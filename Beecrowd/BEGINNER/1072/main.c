#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[1000000],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=10&&a[i]<=20)
        k++;
    }
    printf("%d in\n%d out\n",k,n-k);
    return 0;
}
