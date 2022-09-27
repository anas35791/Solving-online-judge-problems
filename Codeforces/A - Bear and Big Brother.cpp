#include <iostream>

using namespace std;

int main()
{
    int limak,bob,s=0,i;
    cin >> limak >> bob;
    for(i=0;i>=0;i++)
    {
        limak=limak*3;
        bob=bob*2;
        s=s+1;
        if(limak>bob)
            break;
    }
    cout << s << endl;
    return 0;
}
