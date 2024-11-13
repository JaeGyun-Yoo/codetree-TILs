#include <iostream>
using namespace std;

int arr[200002];
int main()
{
    int cur = 100001;
    int n; cin >> n;
    int white = 0;
    int black = 0;
    for(int i=0; i<n; i++)
    {
        int a; char b;
        cin >> a >> b;
        if(b == 'L')
        {
            while(a--)
            {
                if(arr[cur] == -1)
                {
                    black--;
                    white++;
                    arr[cur] = 1;
                }
                else
                {
                    white++;
                    arr[cur] = 1;
                }
                cur--;
            }
            cur++;
        }
        else
        {
            while(a--)
            {
                if(arr[cur] == 1)
                {
                    white--;
                    black++;
                    arr[cur] = -1;
                }
                else
                {
                    black++;
                    arr[cur] = -1;
                }
                cur++;
            }
            cur--;
        }
    }
    cout << white << ' ' << black;
}