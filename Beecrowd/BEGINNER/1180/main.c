#include <stdio.h>

int main()
{
    int a[1000],n,i,m,p,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m=a[i];
        p=i;
        for(j=0;j<n;j++)
        {
            if(m>a[j])
            {
                m=a[j];
                p=j;
            }
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",m,p);

    return 0;
}
