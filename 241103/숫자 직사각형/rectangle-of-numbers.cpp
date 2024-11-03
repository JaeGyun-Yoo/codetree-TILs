#include <iostream>
using namespace std;

int arr[100][100];
int main() {
    int n,m; cin >> n >> m;
    int tmp = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j] = tmp;
            tmp++;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << arr[i][j]<<' ';
        }
        cout << '\n';
    }
    return 0;
}