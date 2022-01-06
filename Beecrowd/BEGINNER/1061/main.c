#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,f,g,h,i,x,y,z,day,da,hr,ha, mnt, sec;
    char ab[10],b1,b2,b3,b4,b5,b6,b7,xy[10],y1,y2,y3,y4,y5,y6,y7;
    scanf("%s%d",&ab,&a);
    scanf("%d%c%c%c%d%c%c%c%d",&b,&b1,&b2,&b3,&c,&b4,&b5,&b6,&d);
    scanf("%s%d",&xy,&f);
    scanf("%d%c%c%c%d%c%c%c%d",&g,&y1,&y2,&y3,&h,&y4,&y5,&y6,&i);
    x=(a*86400)+(b*3600)+(c*60)+d;
    y=(f*86400)+(g*3600)+(h*60)+i;
    z=y-x;
    day=z/86400;
    da=z%86400;
    hr=da/3600;
    ha=da%3600;
    mnt=ha/60;
    sec=ha%60;
    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hr);
    printf("%d minuto(s)\n",mnt);
    printf("%d segundo(s)\n",sec);


    return 0;
}
