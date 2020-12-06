#include <iostream>

using namespace std;

int NWD(int a, int b)
{
	int pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;
  	}
    return a;
}

int main()
{
  int test;

  cin>>test;

  for(int i = 0; i < test; i++)
  {
    int a, b;
    cin>>a>>b;
    cout<<a/NWD(a,b)*b<<endl;
  }

  return 0;
}
