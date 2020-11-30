#include<iostream>
#include<cstdlib>
using namespace std;

bool pierwsza(int n)
{
	if(n<2)
		return false;

	for(int i = 2; i*i <= n; i++)
		if(n%i == 0)
			return false;
	return true;
}

int main()
{
  int n, a;
  cin>>a;
  for(int i = 0; i < a; i++)
  {
    cin>>n;

    if(pierwsza(n))
      cout<<"TAK"<<endl;
    else
      cout<<"NIE"<<endl;
  }



	return 0;
}
