#include <iostream>
using namespace std;
int arr[1000];
struct target
{
    int idx;
    bool positive;
};

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int max_length = 1;
    target a = {0,(arr[0] > 0) ? true : false};
    for(int i=0; i<n; i++)
    {
        bool flag = arr[i] > 0 ? true : false;
        if(a.positive != flag)
        {
            if(max_length < i - a.idx) max_length = i - a.idx;
            a.positive = flag;
            a.idx = i;
        }
        else if(i == n-1)
        {
            if(max_length < i+1 - a.idx) max_length = i+1-a.idx;
        }
    }
cout << max_length;
}