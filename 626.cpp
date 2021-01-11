#include <iostream>
#include <math.h>
#define DOBA 86400

using namespace std;
int main()
{
  int test;
  float ciastka_w_pudelku, czas;
  int obzartuchy;
  cin>>test;
  for(int i = 0; i < test; i++)
  {
    long wynik[100000];

    float suma = 0;

    cin>>obzartuchy>>ciastka_w_pudelku;
    wynik[obzartuchy];

    for(int i = 0; i < obzartuchy; i++)
    {
      cin>>czas;
      float dzialanie = 86400.00/(czas*ciastka_w_pudelku);
      wynik[i] = (int)ceil(dzialanie);
    }
    for(int i = 0; i < obzartuchy; i++)
    {
      suma += wynik[i];
    }
    cout<<(int) ceil(suma)<<endl;
    int fflush(FILE *stream);
  }
  return 0;
}
