#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char k[1000];
    int i,s=0,l=0;
    cin >> k ;
    for(i=0;i<strlen(k);i++)
    {
        if(k[i]>=65&&k[i]<=90)
            s++;
        else
            l++;
    }
    if(s>l)
        {strupr(k);
    cout << k << endl;}
    else
        {strlwr(k);
    cout << k << endl;}
    return 0;
}
