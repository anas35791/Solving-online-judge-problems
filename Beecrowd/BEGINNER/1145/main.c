#include<stdio.h>

int main()
{
    int a,n,i,j=0;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++)
    {j=j+1;
     if(j==a)
      {printf("%d",i);
       printf("\n");
       j=0;}
     else if(j<a)
       printf("%d ",i);
    }
    return 0;
}
