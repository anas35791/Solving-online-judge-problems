#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int i,one=0,two=0,three=0,x;
    scanf("%s",&a);
    x=strlen(a);

    for(i=0;i<x;i++)
    {

        if(a[i]=='1')
            {one=1+one;}
        else if(a[i]=='2')
            {two=1+two;}
        else if(a[i]=='3')
            {three=1+three;}

    }
    for(i=0;i<one;i++)
    {

        if(i==one-1&&two==0&&three==0 )
        printf("1");
        else
            printf("1+");

    }
    for(i=0;i<two;i++)
    {

        if(i==two-1&&three==0)
        printf("2");
        else
            printf("2+");

    }
    for(i=0;i<three;i++)
    {

        if(i==three-1)
        printf("3");
        else
            printf("3+");

    }

    return 0;
}
