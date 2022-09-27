#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i,j,a[1000]={},s=0,k=0;
    scanf("%d",&j);
    char username[1000];
    scanf("%s",&username);
    for(i=0;i<strlen(username);i++)
    {
        if(username[i]==username[i+1])
            k++;
    }
    cout << k;
    return 0;
}
