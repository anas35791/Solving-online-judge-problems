#include <stdio.h>
#include <math.h>
int main()
{ int n,i,a;
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{a=pow(i,2);
	    printf("%d^2 = %d\n",i,a);}
	return 0;
	}
