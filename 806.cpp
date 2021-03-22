#include <iostream>

using namespace std;

int ab(int a)
{
    if(a > 0) return a;
    else return -a;
}
int main()
{
    char fan[401][401];
    int n, x, y;
    while(true)
    {
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < 2*ab(n); i++)
        {
            for(int y = 0; y < 2*ab(n); y++)
            {
                fan[i][y] = '.';
            }
        }
        if(n > 0)
        {
            for(int i = 0; i < 2*n; i++)
            {
                if(i < n)
                {
                    x = i+1;
                    y = 0;
                }
                else
                {
                    x = 2*n - i;
                    y = -(2*n-1);
                }
                while(x)
                {
                    fan[i][ab(y)] = '*';
                    x--;
                    y++;
                }
            }
            for(int i = 0; i < 2*n; i++)
            {
                if(i < n)
                {
                    x = n-i;
                    y = n;
                }
                else
                {
                    x = i-n+1;
                    y = -n + 1;
                }
                while(x)
                {
                    fan[i][ab(y)] = '*';
                    x--;
                    y++;
                }
            }
        }
        else
        {
            n = ab(n);
            for(int i = 0; i < 2*n; i++)
            {
                if(i < n)
                {
                    x = n-i;
                    y = n-1;
                }
                else
                {
                    x = i-n+1;
                    y = -n;
                }
                while(x)
                {
                    fan[i][ab(y)] = '*';
                    x--;
                    y--;
                }
            }
            for(int i = 0; i < 2*n; i++)
            {
                if(i < n)
                {
                    x = i+1;
                    y = 2*n-1;
                }
                else
                {
                    x = 2*n-i;
                    y = 0;
                }
                while(x)
                {
                    fan[i][ab(y)] = '*';
                    x--;
                    y--;
                }
            }
        }
        for(int i = 0; i < 2*n; i++)
        {
            for(int y = 0; y < 2*n; y++) cout << fan[i][y];
            cout << endl;
        }
    }
}
