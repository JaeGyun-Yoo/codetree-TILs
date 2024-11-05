#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    int num;
    int tall;
    int height;
};
bool compare(person cur, person nxt)
{
    if(cur.tall != nxt.tall) return cur.tall >= nxt.tall;
    if(cur.height != nxt.height) return cur.height >= nxt.height;
    return cur.num <= nxt.num;
}
int main()
{
    int n; cin >> n;
    person* arr = new person[n];
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        arr[i].num = i+1;
        arr[i].tall = a; arr[i].height = b;
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].tall << " " << arr[i].height << " " << arr[i].num << endl;
    }
}