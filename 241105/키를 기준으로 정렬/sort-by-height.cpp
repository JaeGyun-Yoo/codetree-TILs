#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    string name;
    int tall;
    int height;
};

bool compare(person cur, person nxt)
{
    return cur.tall < nxt.tall;
}

int main()
{
    int n; cin >> n;
    person* arr = new person[n];
    for(int i=0; i<n; i++)
    {
        string a;
        int b;
        int c;
        cin >> a >> b >> c;
        arr[i].name = a;
        arr[i].tall = b;
        arr[i].height = c;
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].tall << " " << arr[i].height << '\n';
    }
}