#include <iostream>
#include <algorithm>
using namespace std;

string arr[100];

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << '\n';
    }
}