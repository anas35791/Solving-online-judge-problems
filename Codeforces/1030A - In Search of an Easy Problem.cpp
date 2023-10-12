#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int a,s=0;
    cin>> a;
    int n[a];
    for(int i=0;i<a;i++)
    {
        cin>>n[i];
        s+=n[i];
    }
    if(s==0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    return 0;
}
