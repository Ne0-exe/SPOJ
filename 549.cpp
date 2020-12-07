#include <iostream>

using namespace std;

int main()
{
  int test;

  cin>>test;

  for(int i = 0; i < test; i++)
  {

    int ile;
    cin>>ile;
    int tab[ile];
    for(int i = 0; i < ile; i++)
    {

      cin>>tab[i];
    }
    int suma = 0;
    for(int i = 0; i < ile; i++)
    {

      suma+=tab[i];

    }
    cout<<suma<<endl;
  }

    return 0;
}
