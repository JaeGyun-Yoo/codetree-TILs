#include <iostream>
#include <algorithm>
using namespace std;
int arr[2000];
int main()
{
    int n; cin >> n;
    n *= 2;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i] + arr[n - i - 1];
    }
    sort(arr,arr+(n/2));
    cout << arr[n/2 - 1];
}