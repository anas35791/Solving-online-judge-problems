#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a,s=0;
    cin>>n>>a;
    int b[n];
    for(int i=0;i<n;i++)
    { cin>>b[i];
       if(b[i]>a)
         s=s+2;
        else
         s=s+1;}
    cout<<s; 

    return 0;
}
