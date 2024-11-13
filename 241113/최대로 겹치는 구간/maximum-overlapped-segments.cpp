#include <iostream>
#include <algorithm>
using namespace std;
int arr[201];

bool compare(int& a, int& b)
{
    return a > b;
}

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int start, end; cin >> start >> end;
        start += 100; end += 100;
        for(start; start<end; start++)
        {
            arr[start]++;
        }
    }
    sort(arr,arr+201, compare);
    cout << arr[0];
}
