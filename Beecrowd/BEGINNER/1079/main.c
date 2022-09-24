#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    float a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%.1f\n",(.2*a[i][0]+.3*a[i][1]+.5*a[i][2]));
    }
    return 0;
}
