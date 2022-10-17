#include <bits/stdc++.h>

using namespace std;

int main()
{
        int t,n,l;
        cin>>t>>n>>l;
        int a[n+2],b[l+2],counter[t+2]={};
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=l;i++)
        {
            cin>>b[i];
        }
        for(int i=1;i<=n;i++)
        {
            counter[a[i]]++;
        }
        for(int i=1;i<=t;i++)
        {
            if(counter[i]==0)
                counter[i]=2;
        }
        for(int i=1;i<=t;i++)
        {
            cout<<counter[i]<<" ";
        }

    return 0;
}
