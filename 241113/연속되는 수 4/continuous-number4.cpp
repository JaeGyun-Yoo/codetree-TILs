#include <iostream>
using namespace std;

struct target
{
    int idx;
    int value;
};
int arr[1001];
int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    target a = {0,arr[0]};
    int max_length = 1;
    int tmp_length = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] - a.value > 0) //증가했으면,
        {
            if(i == n-1)
            {
                tmp_length++;
                if(max_length < tmp_length) max_length = tmp_length;
                break;
            }
            tmp_length++;
            a.value = arr[i];
        }
        else
        {
            if(max_length < tmp_length) max_length = tmp_length;
            tmp_length = 1;
            a.value = arr[i];
        }
    }
    cout << max_length;
}