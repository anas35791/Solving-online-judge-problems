#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,s=0;
    for(i=1;i<=100;i++)
    {

        s=1/i+s;
    }
    printf("%.2f\n",s);
    return 0;
}
