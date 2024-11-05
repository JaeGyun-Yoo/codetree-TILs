#include <iostream>
#include <algorithm>
using namespace std;

struct person
{
    string name;
    int a,b,c;
};

bool compare(person cur, person nxt)
{
    return cur.a + cur.b + cur.c < nxt.a + nxt.b + nxt.c;
}

int main()
{
    int n; cin >> n;
    person* arr = new person[n];
    for(int i=0; i<n; i++)
    {
        string A; int B,C,D; cin >> A >> B >> C >> D;
        arr[i].name = A;
        arr[i].a = B; arr[i].b = C; arr[i].c = D;
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].a << " " << arr[i].b << " " << arr[i].c << endl;
    }
}