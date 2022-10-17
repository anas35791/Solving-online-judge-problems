#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,sum=0;
    cin>>n>>a>>b;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<abs(arr[b-1]-arr[b])<<endl;
    return 0;
}
