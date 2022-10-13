#include<iostream>
#include <algorithm>
using namespace std;
#define ll long long int

bool comp(int a, int b)
{
    return a>b;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n+1];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,comp);
        for(ll i=0; i<2; i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}
