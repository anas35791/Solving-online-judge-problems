#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,sum=0,sum1=0,sum2=0,f=0,g=0;
        cin>>n;
        long long int a[n+5],b[n+5],c[n+5],d[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            sum=sum+b[i];
        }
        sum=sum*2;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c[f]=b[i];
                f++;
            }
            if(a[i]==1)
            {
                d[g]=b[i];
                g++;
            }
        }
        sum1=f;
        sum2=g;
        sort(b,b+n);
        sort(c,c+f);
        sort(d,d+g);
        long long int x=abs(sum1-sum2);
        if(sum1==sum2)
        {
             sum=sum-b[0];
        }
        if(sum1<sum2)
        {
            for(i=0;i<x;i++)
            {
                sum=sum-d[i];
            }
        }
        if(sum1>sum2)
        {
            for(i=0;i<x;i++)
            {
                sum=sum-c[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
