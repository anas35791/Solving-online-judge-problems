#include <stdio.h>

int main()
{
    int i,j,k[5][5],l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&k[i][j]);
        }
    }
    if(k[0][0]==1||k[4][0]==1||k[0][4]==1||k[4][4]==1)
        printf("4\n");
    else if(k[1][1]==1||k[1][3]==1||k[3][1]==1||k[3][3]==1)
        printf("2\n");
    else if(k[1][2]==1||k[2][1]==1||k[3][2]==1||k[2][3]==1)
        printf("1\n");
    else if(k[2][2]==1)
        printf("0\n");
    else if(k[0][2]==1||k[2][0]==1||k[4][2]==1||k[2][4]==1)
        printf("2\n");
    else
        printf("3\n");
    return 0;

}
