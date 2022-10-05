#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    for(int i=0;i>=0;i++)
    {
        n=n+1;
        int a[4]={};

        a[0]=n/1000;
        a[1]=(n-(a[0]*1000))/100;
        a[2]=(n-(a[0]*1000)-(a[1]*100))/10;
        a[3]=(n-(a[0]*1000)-(a[1]*100))%10;

        if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[0]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[0]&&a[2]!=a[1]&&a[2]!=a[3]&&a[3]!=a[0]&&a[3]!=a[1]&&a[3]!=a[2])
        {
            cout<<n<<endl;
            break;
        }

    }

    return 0;
}
