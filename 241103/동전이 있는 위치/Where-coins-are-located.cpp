#include <iostream>
using namespace std;
int arr[9][9];
int main() {
    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int a,b; cin >> a >> b;
        a--;b--;
        arr[a][b]++;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout<<'\n';
    }
    return 0;
}