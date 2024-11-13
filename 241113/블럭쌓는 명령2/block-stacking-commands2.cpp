#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    int* arr = new int[n];
    for(int i=0; i<m; i++)
    {
        int start, end; cin >> start >> end;
        for(start; start<=end; start++)
        {
            arr[start]++;
        }
    }
    sort(arr,arr+n);
    cout << arr[n-1];
}