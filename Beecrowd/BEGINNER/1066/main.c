#include <stdio.h>
int main()
{
	int  a,b,c,d,e,z;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int p=a,q=b,r=c,s=d,t=e, y;
	if(a%2==0)
	a=1;
	else
	a=0;
	if(b%2==0)
	b=1;
	else
	b=0;
	if(c%2==0)
	c=1;
	else
	c=0;
	if(d%2==0)
	d=1;
	else
	d=0;
	if(e%2==0)
	e=1;
	else
	e=0;
	z=a+b+c+d+e;
	printf("%d valor(es) par(es)\n",z);
	printf("%d valor(es) impar(es)\n",5-z);
	int n1=p,n2=q,n3=r,n4=s,n5=t,yz;
	if(p>0)
	p=1;
	else
	p=0;
	if(q>0)
	q=1;
	else
	q=0;
	if(r>0)
	r=1;
	else
	r=0;
	if(s>0)
	s=1;
	else
	s=0;
	if(t>0)
	t=1;
	else
	t=0;
	y=p+q+r+s+t;
	printf("%d valor(es) positivo(s)\n",y);
	if(n1<0)
	n1=1;
	else
	n1=0;
	if(n2<0)
	n2=1;
	else
	n2=0;
	if(n3<0)
	n3=1;
	else
	n3=0;
	if(n4<0)
	n4=1;
	else
	n4=0;
	if(n5<0)
	n5=1;
	else
	n5=0;
	yz=n1+n2+n3+n4+n5;
	printf("%d valor(es) negativo(s)\n",yz);
	return 0;
	}
