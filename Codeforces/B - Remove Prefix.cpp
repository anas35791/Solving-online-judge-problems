#include <iostream>

using namespace std;

int main()
{
    long long int firstint,secondint,i,j,number[secondint+1];
    cin>>firstint;
    for(i=0;i<firstint;i++)
    {
        cin>>secondint;
        long  long int number[secondint+1]={},counter[200003]={},l=0;
        for(j=0;j<secondint;j++)
        {
            cin>>number[j];
        }
        for(j=secondint-1;j>=0;j--)
        {
            counter[number[j]]++;
            if(counter[number[j]]>1) break;
            l++;

        }
        cout<<secondint-l<<endl;
    }

    return 0;
}
