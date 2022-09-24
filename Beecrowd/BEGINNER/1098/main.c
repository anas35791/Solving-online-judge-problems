#include <stdio.h>

int main() {

    float i;
    for(i=0.0;i<=0.2;i=i+.2)
    { printf("I=%.0f J=%.0f\n",i,i+1);
      printf("I=%.0f J=%.0f\n",i,i+2);
      printf("I=%.0f J=%.0f\n",i,i+3);
    }
    for(i=0.2;i<=0.9;i=i+.2)
    { printf("I=%.1f J=%.1f\n",i,i+1);
      printf("I=%.1f J=%.1f\n",i,i+2);
      printf("I=%.1f J=%.1f\n",i,i+3);
    }
    for(i=1.0;i<=1.1;i=i+.2)
    { printf("I=%.0f J=%.0f\n",i,i+1);
      printf("I=%.0f J=%.0f\n",i,i+2);
      printf("I=%.0f J=%.0f\n",i,i+3);
    }
    for(i=1.2;i<=2;i=i+.2)
    { printf("I=%.1f J=%.1f\n",i,i+1);
      printf("I=%.1f J=%.1f\n",i,i+2);
      printf("I=%.1f J=%.1f\n",i,i+3);
    }
    for(i=2.0;i<=2.1;i=i+.2)
    { printf("I=%.0f J=%.0f\n",i,i+1);
      printf("I=%.0f J=%.0f\n",i,i+2);
      printf("I=%.0f J=%.0f\n",i,i+3);
    }

    return 0;
}
