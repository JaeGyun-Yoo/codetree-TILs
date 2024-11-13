#include <iostream>
using namespace std;

int map[201][201];
int ans = 0;
int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        a += 100; b += 100; c += 100; d += 100;
        //a = 0, b = 1, c = 4, d = 5
        for(int j = a; j<c; j++)
        {
            for(int k = b; k<d; k++)
            {
                if(!map[j][k])
                {
                    ans++;
                    map[j][k]=1;
                }
            }
        }
    }
    cout << ans;
}