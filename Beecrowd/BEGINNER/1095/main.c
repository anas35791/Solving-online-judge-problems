#include <stdio.h>

int main() {

    int a,b,i;
    printf("I=1 J=60\n");
    for(i=1;i<=12;i++)
    { a=1+3*i;
      b=60-5*i;
      printf("I=%d J=%d\n",a,b);
    }


    return 0;
}
