#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char username[100];
    int i,j,a[1000]={},s=0,k=0;
    scanf("%s",&username);
    for(i=0;i<strlen(username);i++)
    {
        a[username[i]]++;
        if(a[username[i]]>1)
            continue;
        else
        k++;
    }
    if(k%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
