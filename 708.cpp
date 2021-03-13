#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
         cout<<"\n";
        int s, n = 0;
        cin>>s;
        for(int j = 0; j < 10000; j++)
        {
            if(s == 1)
            {
                cout<<j;
                break;
            }
            if(s%2) s = 3 * s + 1; 
            else s = s / 2;
        }
    }
    return 0;
}
