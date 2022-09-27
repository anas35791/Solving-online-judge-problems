#include<stdio.h>

int main()
{
    int a,b,c,n,i,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a&&b==1||b&&c==1||c&&a==1)
            z=z+1;
    }
    printf("%d\n",z);
    return 0;
}
