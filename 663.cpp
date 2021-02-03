#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct wspol
{
  string nazwa;
  float x;
  float y;
  float wynik;
};

int main()
{
  wspol wektor;;
  int test, punkty;
  string name;
  float i, j;
  cin>>test;
  for(int h = 0; h < test; h++)
  {
    cin>>punkty;
    vector<wspol> wektor(punkty);
    for(int a = 0; a < punkty; a++)
    {
      cin>>name;
      wektor[a].nazwa = name;
      cin>>i;
      wektor[a].x = i;
      cin>>j;
      wektor[a].y = j;
    }
    for(int a = 0; a < punkty; a++)
    {
      float wyn = pow((pow(wektor[a].x, wektor[a].y)), 0.5);
      wektor[a].wynik = wyn;
    }

    int m,j;
    for(m = 0; m < punkty-1; m++)
    {
      for (j = punkty-1; j > m; --j)
      {
          if(wektor[j].wynik < wektor[j-1].wynik)
          {
            swap(wektor[j], wektor[j-1]);
          }
      }
    }
    for(int z = 0; z < punkty; z++)
    {
      cout<<wektor[z].nazwa<<" "<<wektor[z].x<<" "<<wektor[z].y<<endl;
    }
    cout<<endl;

  }

  return 0;
}
