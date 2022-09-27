#include <iostream>

using namespace std;

int main()
{
    int n,a[100000],s=0,j=0,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {

        if(a[i]==25)
        {
         j=j+1;}
        else if(a[i]==50)
        {
            if(j==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            j=j-1;
            k=k+1;

        }
        else if(a[i]==100)
        {
             if(j==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            else if(j<3&&k==0)
            {
                cout<<"NO"<<endl;
                    return 0;
            }
            else if(j>=3&&k==0)
            {
                j=j-3;
            }
            else if(k>0)
            {
                j=j-1;
                k=k-1;
            }


        }
    }
    cout<<"YES"<<endl;

    return 0;
}
