#include <stdio.h>
int main()
{
	double a,n;
	scanf("%lf%lf",&a,&n);
	if(a==1)
	printf("Total: R$ %.2lf\n",4*n);
	else if(a==2)
	printf("Total: R$ %.2lf\n",4.5*n);
	else if(a==3)
	printf("Total: R$ %.2lf\n",5*n);
	else if(a==4)
	printf("Total: R$ %.2lf\n",2*n);
	else if(a==5)
	printf("Total: R$ %.2lf\n",1.5*n);

	return 0;
	}
