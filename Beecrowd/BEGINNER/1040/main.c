#include <stdio.h>
int main()
{
	float a,b,c,d,avg;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	avg=(.2*a+.3*b+.4*c+.1*d);
	printf("Media: %.1f\n",avg);
	if(avg>=7.0)
	printf("Aluno aprovado.\n");
	else if(avg<5.0)
	printf("Aluno reprovado.\n");
	else
	{
		printf("Aluno em exame.\n");
		float x,y;
		scanf("%f",&x);
		printf("Nota do exame: %.1f\n",x);
		y=(avg+x)/2;
		if(y>=5)
		printf("Aluno aprovado.\n");
		else
		printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n",y);
	}
	return 0;
	}
