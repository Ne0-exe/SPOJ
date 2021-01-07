#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
void printfloat(float);
int main()
{
  int t;
  float x;
  cin >> t; /* wczytaj liczbę testów */
  while(t){
    cin >> x;
    printfloat(x);
    t--;
  }
  return 0;
}  /* ........................  Tu napisz potrzebne funkcje */

void printfloat(float liczba)
{
    for (int i = sizeof liczba-1; i>=0; --i)
    {
        printf("%x ",(((const unsigned char*)&liczba)[i]));
    }
}
