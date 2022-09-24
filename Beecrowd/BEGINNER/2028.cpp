#include <iostream>

using namespace std;

int main()
{
    int n,s=1,i,j;
    while(scanf("%d",&n) != EOF)
    {


        if(((n*(n+1))/2)+1==1)
        cout<<"Caso " <<s<<": "<<((n*(n+1))/2)+1<<" numero"<<endl;
        else
         cout<<"Caso " <<s<<": "<<((n*(n+1))/2)+1<<" numeros"<<endl;

        for(i=0;i<=n;i++)
        {
            if(i==0)
                {if(n==0)
                cout<<"0";
                else
                    cout<<"0 ";
                 continue;}
            for(j=1;j<=i;j++)
                if(i==n&&j==i)
                  cout<<i;
                else
                cout<<i<<" ";

        }
        cout<<endl<<endl;
        s++;

    }

    return 0;
}
