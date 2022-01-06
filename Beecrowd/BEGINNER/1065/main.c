#include <stdio.h>
int main()
{
	int  a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if((a%2)!=0)
	a=0;
	else
	a=1;
	if((b%2)!=0)
	b=0;
	else
	b=1;
	if((c%2)!=0)
	c=0;
	else
	c=1;
	if((d%2)!=0)
	d=0;
	else
	d=1;
	if((e%2)!=0)
	e=0;
	else
	e=1;
	printf("%d valores pares\n",a+b+c+d+e);
	return 0;
	}
