#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;
	int l=a.length();
	int x,y,z,m,n;
	for(int i=0;i<l;i++)
    {
        if(a[i]=='h')
        {
            x=i;
            break;
        }
    }
    for(int i=x;i<l;i++)
    {
        if(a[i]=='e')
        {
            y=i;
            break;
        }
    }
    for(int i=y;i<l;i++)
    {
        if(a[i]=='i')
        {
            z=i;
            break;
        }
    }
    for(int i=z;i<l;i++)
    {
        if(a[i]=='d')
        {
            m=i;
            break;
        }
    }
    for(int i=m;i<l;i++)
    {
        if(a[i]=='i')
        {
            n=i;
            break;
        }
    }
	if(x<y&&y<z&&z<m&&m<n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
        cout<<"NO"<<endl;
	}
return 0;
}
