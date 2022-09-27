#include<stdio.h>

int main()
{
    int a[100],n,i,m,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
     if(a[i]==0)
     break;

     else if(i<=a[m]-1||a[i]==1)
     s++;
    }
    printf("%d\n",s);

    return 0;
}
