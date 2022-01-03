#include <stdio.h>
int main()
{
	float a,i,c,d;
	scanf("%f",&a);

	if(a>=0&&a<=2000)
	printf("Isento\n");
	else if(a>2000&&a<=3000)
	{ a=a-2000;
		i=(a*.08);
	printf(	"R$ %.2f\n",i);}
	else if(a>3000&&a<=4500)
	{ a=a-2000;
		c=a-1000;
		i=(c*.18);
	printf(	"R$ %.2f\n",i+80);}
	else if(a>4500)
	{ a=a-2000;
		c=a-1000;
		d=c-1500;
		i=(d*.28);
	printf(	"R$ %.2f\n",i+350);}
	return 0;
	}
