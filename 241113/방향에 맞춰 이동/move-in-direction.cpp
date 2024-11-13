#include <iostream>
using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

int map[2000][2000];
int x,y;
int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        char dir; int k;
        cin >> dir >> k;
        if(dir == 'N')
        {
            x = x + dx[3] * k;
            y = y + dy[3] * k;
        }
        else if(dir == 'S')
        {
            x = x + dx[2] * k;
            y = y + dy[2] * k;
        }
        else if(dir == 'W')
        {
            x = x + dx[1] * k;
            y = y + dy[1] * k;
        }
        else if(dir == 'E')
        {
            x = x + dx[0] * k;
            y = y + dy[0] * k;
        }
    }
    cout << x << ' ' << y;
}