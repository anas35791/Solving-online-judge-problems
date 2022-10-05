#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,s=0,i,j;
        cin>>n>>k;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i+1)%k==(j+1)%k)
                {
                    long long int g=max(a[i],a[j]);
                    long long int h=min(a[i],a[j]);
                    a[i]=g;
                    a[j]=h;
                }
            }
            s=s+a[i];
        }
        cout<<s<<endl;
    }
    return 0;
}
