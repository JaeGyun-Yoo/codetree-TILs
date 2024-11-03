#include <iostream>
using namespace std;

int main() {
    int arr[9];
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int tmp; cin >> tmp;
        cin[tmp]++;
    }
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}