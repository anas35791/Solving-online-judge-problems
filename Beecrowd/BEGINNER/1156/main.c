#include <stdio.h>
#include <math.h>

int main()
{
    float i,s,j,k;
    for(i=0;i<=19;i=i+2)
    {

        for(j=0;j<=1;j++)
        {
            k=pow(2,j);
        }
        s=i/k;
    }
    printf("%.2f\n",s);
    return 0;
}
