#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X[100],n;
    int i;
    for(i=0;i<100;i++)
    {

        scanf("%f",&X[i]);
        if(X[i]<=10)
        printf("A[%d] = %.1f\n",i,X[i]);

    }
    return 0;
}
