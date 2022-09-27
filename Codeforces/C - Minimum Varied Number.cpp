#include <iostream>
 
using namespace std;
 
int main()
{
    int n,a[100000],j,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s=0,counter=0;
        cin>>a[i];
        for(j=9;j>0;j--)
        {
            s=s+j;
            if(s>a[i])
            {
                s=s-j;
                continue;
            }
            arr[counter]=j;
            counter++;
            if(s==a[i])
            {
                break;
            }
        }
        for(j=counter-1;j>=0;j--)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
 
    return 0;
}
