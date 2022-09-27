#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000],str[1000];
    scanf("%s",&a);
    strcpy(str,a);
    strupr(a);
    printf("%c",a[0]);
    printf("%s",str+1);

    return 0;
}
