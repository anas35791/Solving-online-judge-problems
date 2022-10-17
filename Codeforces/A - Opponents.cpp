#include <iostream>

using namespace std;

int main()
{

    int n,t,m=0,sum=0;
    cin>>n>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int cal=sum;
        for(int i=0;i<=n;i++)
        {
            if(str[i]=='0')
            {
                sum=sum+1;
                if(m<=sum)
                {
                    m=sum;
                }
                break;
            }
        }
        if(cal==sum)
        {
            sum=0;
        }

    }
    cout<<m<<endl;
    return 0;
}
