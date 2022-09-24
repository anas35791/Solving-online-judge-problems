#include <stdio.h>
int main()
{ int n,n1,i,sum=0;
	scanf("%d%d",&n,&n1);
	if(n>n1)
    {for(i=-90000001;i<n;i=i+2)
	{if(i>n1)
		sum=sum+i;}
		printf("%d\n",sum);}
    else
    {
        for(i=-90000001;i<n1;i=i+2)
	{if(i>n)
		sum=sum+i;}
		printf("%d",sum);
    }
	return 0;
	}

