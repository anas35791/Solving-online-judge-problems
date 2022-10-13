#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b&&b<c&&b<d)
            cout<<"NO"<<endl;
        else if(a>b&&a<c&&a<d)
            cout<<"NO"<<endl;
        else if(c<d&&d<a&&d<b)
            cout<<"NO"<<endl;
        else if(c>d&&c<a&&c<b)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
