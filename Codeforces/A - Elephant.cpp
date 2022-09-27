#include <iostream>

using namespace std;

int main()
{
    int k,n,w,s=0,i;
    cin >> k ;
    if(k%5!=0)
    {s=s+1;}
    w=k/5;
    cout << s+w << endl;
    return 0;
}
