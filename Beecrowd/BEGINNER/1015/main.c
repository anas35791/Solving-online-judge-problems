#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,distance;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&c,&d);
    distance=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%.4f\n",distance);
    return 0;
}
