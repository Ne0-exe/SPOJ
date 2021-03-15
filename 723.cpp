#include <iostream>

using namespace std;

int main()

{
    int tab[1000];
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            cin >> tab[i];
        }
         
        for (int i = 1; i < n; i++)
        {
            cout << tab[i] << " ";
        }
        cout << tab[0] << "\n";
        
    }


    return 0;
}
