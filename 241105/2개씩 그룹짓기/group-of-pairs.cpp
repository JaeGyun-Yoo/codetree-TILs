#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int main()
{
    int n; cin >> n;
    int* sum = new int[n];
    n *= 2;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        sum[i] = arr[i] + arr[n-i-1];
    }
    sort(sum,sum+(n/2));
    cout << sum[n/2 - 1];
}