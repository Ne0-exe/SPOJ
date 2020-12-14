#include<iostream>
#include<cstdlib>
using namespace std;

int nwd(int a, int b)
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
    int a, b, test;
    cin>>test;
    for(int i = 0; i < test; i++)
    {
      cin>>a>>b;
      cout<<nwd(a,b)<<endl;
    }


    return 0;
}
