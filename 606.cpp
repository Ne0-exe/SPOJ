#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int tab[n];
        for(int a = 0; a < n; a++)
        {
            cin>>tab[a];
        }
        for(int i = n-1; i >= 0; i--)
        {
            cout<<tab[i]<<" ";
        }

    }


    return 0;
}
