#include <iostream>

using namespace std;

int main()
{
    int t, i;
    cin>>t;
    for(i = 0; i < t; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a != b)
        {
            while(a != b)
            {
                if(a > b)
                {
                    a -= b;
                }
                else
                {
                    b -= a;
                }
            }
            cout<<a+b<<endl;
        }
        else
            cout<<a+b<<endl;
    }
    return 0;
}
