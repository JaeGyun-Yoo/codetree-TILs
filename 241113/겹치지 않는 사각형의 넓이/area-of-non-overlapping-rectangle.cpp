#include <iostream>
using namespace std;

int map[2001][2001];
int ans = 0;

int main()
{
    for(int i=0; i<2; i++)
    {
        int a,b,c,d; cin >> a >> b >> c >> d;
        for(int j=a; j<c; j++)
        {
            for(int k=b; k<d; k++)
            {
                map[j][k]=1; ans++;
            }
        }
    }
    int a,b,c,d; cin >> a >> b >> c >> d;
    for(int i=a; i<c; i++)
    {
        for(int j=b; j<d; j++)
        {
            if(map[i][j])
            {
                ans--;
            }
        }
    }
    cout << ans;
}