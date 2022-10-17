#include <iostream>

using namespace std;

int main()
{
	int a,b,c,n,sum=0,s;
	cin>>a>>b>>c>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s>b&&s<c)
            sum++;
	}
	cout<<sum<<endl;
	return 0;
}
