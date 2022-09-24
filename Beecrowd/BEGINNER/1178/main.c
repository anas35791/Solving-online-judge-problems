#include <stdio.h>

int main()
{
    double i,j,n;
    scanf("%lf",&n);
    for(i=0;i<100;i++)
    {

        printf("N[%.0lf] = %.4lf\n",i,n);
        n=n/2;
    }
    return 0;
}
