#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int counter=0,counter2=0;
        string str,str2;
        cin>>str;
        str2=str;
        str.insert(0,"a");
        int x=str.length();
        //cout<<str<<endl;
        for(int i=0;i<(x/2);i++)
        {
            if(str[i] != str[x-i-1])
            {
                counter=1;
                break;
            }
        }
        str2.insert(x-1,"a");
        for(int i=0;i<(x/2);i++)
        {
            if(str2[i] != str2[x-i-1])
            {
                counter2=1;
                break;
            }
        }
        if(counter==1)
        {
            cout<<"YES"<<endl;
            cout<<str<<endl;
        }
        else if(counter==0&&counter2==0)
        {
            cout<<"NO"<<endl;
        }
        else{
             if(counter2==1)
        {
            cout<<"YES"<<endl;
            cout<<str2<<endl;
        }
        }

    }
    return 0;
}
