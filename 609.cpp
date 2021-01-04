#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.141592654

using namespace std;
int main()
{
  double r, d;
  int t;
  cin>>t;
  while(t > 0)
  {
    cin>>r>>d;
    double h;
    double s;

    h = sqrt((r*r)-((d*d)/4));
    s = h*h*PI;

    cout.setf(ios::fixed);
    cout<<fixed<<setprecision(3)<<s<<endl;

    t--;
  }

  return 0;
}
