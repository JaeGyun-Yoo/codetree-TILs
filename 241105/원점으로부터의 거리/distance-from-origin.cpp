#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

struct circle
{
    int num;
    int distance;
};

bool compare(circle cur, circle nxt)
{
    if(cur.distance != nxt.distance) return cur.distance < nxt.distance;
    return cur.num < nxt.num;
}

int main()
{
    int n; cin >> n;
    circle* arr = new circle[n];
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        arr[i].num = i+1;
        arr[i].distance = abs(a) + abs(b);
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].num << '\n';
    }
}