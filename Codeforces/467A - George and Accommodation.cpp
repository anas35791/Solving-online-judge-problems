#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,i,s=0;
    cin>>a;
    int arr[a*2+1];
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        cin>>arr[i+1];
        int g=arr[i+1]-arr[i];
        if(g>=2)
        {
            s+=1;
        }
        
        
    }
    cout<<s;

    return 0;
}
