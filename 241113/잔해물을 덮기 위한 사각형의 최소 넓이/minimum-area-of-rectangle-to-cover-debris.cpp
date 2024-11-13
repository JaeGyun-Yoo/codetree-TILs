#include <iostream>
using namespace std;

int map[2001][2001];

int main()
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    a += 1000; b += 1000; c += 1000; d += 1000;

    for(int i=a; i<c; i++)
    {
        for(int j=b; j<d; j++)
        {
            map[i][j]=1;
        }
    }
    
    int e,f,g,h; cin >> e >> f >> g >> h;
    e += 1000; f += 1000; g += 1000; h += 1000;

    for(int i=e; i<g; i++)
    {
        for(int j=f; j<h; j++)
        {
            map[i][j]=0;
        }
    }

    int max_x = 0; int max_y = 0;

    for(int i=a; i<c; i++)
    {
        for(int j=b; j<d; j++)
        {
            if(map[i][j])
            {
                if(max_y < i - a) max_y = i - a;
                if(max_x < j - b) max_x = j - b;
            }
        }
    }
    if(max_x == 0 || max_y == 0)
    {
        cout << 0;
        return 0;
    }
    cout << (max_x + 1) * (max_y + 1);

}