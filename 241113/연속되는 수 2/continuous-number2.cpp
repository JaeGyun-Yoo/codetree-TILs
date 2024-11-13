#include <iostream>
using namespace std;
int arr[1000];
struct target
{
    int idx;
    int value;
};

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    target a;
    a.value = arr[0];
    a.idx = 0;
    int max_length = 1;
    for(int i=0; i<n; i++)
    {
        if(a.value != arr[i])
        {
            if(max_length < i - a.idx)
                max_length = i - a.idx;
            a.value = arr[i];
            a.idx = i;
        }
        else if(i == n-1)
        {
            if(max_length < i+1 - a.idx) max_length = i+1 - a.idx;
        }
    }
    cout << max_length;
}