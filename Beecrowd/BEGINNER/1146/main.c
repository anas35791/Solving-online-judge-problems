#include<stdio.h>

int main()
{
    int n,i,j;
    for(i=1;i>0;i++)
    { scanf("%d",&n);
      if(n==0)
      {break;}
      else
      {for(j=1;j<=n;j++)
       if(j==n)
        { printf("%d",j);
          printf("\n");}
        else
        {printf("%d ",j);}}
      }
    return 0;
}
