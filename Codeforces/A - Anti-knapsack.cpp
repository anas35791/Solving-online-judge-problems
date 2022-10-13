#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<n-k+k/2<<endl;
        for(int i=(k+1)/2;i<=n;i++)
        {
            if(i==k)
            {
                continue;
            }
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
