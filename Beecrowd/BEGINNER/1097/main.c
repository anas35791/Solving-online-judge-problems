#include <stdio.h>

int main() {

    int i;
    for(i=1;i<=9;i=i+2)
    { printf("I=%d J=%d\n",i,i+6);
      printf("I=%d J=%d\n",i,i+5);
      printf("I=%d J=%d\n",i,i+4);
    }


    return 0;
}
