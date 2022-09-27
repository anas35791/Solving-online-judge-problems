#include<stdio.h>
#include<string.h>
 
int main()
{
    int arr[100],i,n,g;
    char str[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&str);
        g=strlen(str);
        if(g>10)
            printf("%c%d%c\n",str[0],g-2,str[g-1]);
        else
            printf("%s\n",str);
    }
    return 0;
}
