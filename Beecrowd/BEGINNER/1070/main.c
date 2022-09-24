#include <stdio.h>
int main()
{ int n,i;
	scanf("%d",&n);
	for(i=1;i<=n+11;i=i+2)
	{if(i>=n)
		printf("%d\n",i);}
	return 0;
	}
