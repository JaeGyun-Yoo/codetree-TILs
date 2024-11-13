#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int& a, int& b)
{
    return a >= b;
}
int main()
{
    int n; cin >> n;
    int arr[200] = {};
    for(int i=0; i<n; i++)
    {
        int start, end; cin >> start >> end;
        for(start; start<end; start++)
        {
            arr[start]++;
        }
    }
    sort(arr,arr+200, compare);
    cout << arr[0];
}
