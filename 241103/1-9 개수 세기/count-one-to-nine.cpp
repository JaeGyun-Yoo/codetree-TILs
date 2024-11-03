#include <iostream>
using namespace std;
int arr[10];
int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int tmp; cin >> tmp;
        arr[tmp]++;
    }
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}