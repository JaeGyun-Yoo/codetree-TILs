#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    string name;
    int korea;
    int english;
    int math;
};
bool compare(person cur, person nxt)
{
    if(cur.korea != nxt.korea)
    {
        return cur.korea >= nxt.korea;
    }
    if(cur.english != nxt.english)
    {
        return cur.english >= nxt.english;
    }
    return cur.math >= nxt.math;
}
int main()
{
    int n; cin >> n;
    person* arr = new person[n];
    for(int i=0; i<n; i++)
    {
        string a; int b,c,d;
        cin >> a >> b >> c >> d;
        arr[i].name = a;
        arr[i].korea = b;
        arr[i].english = c;
        arr[i].math = d;
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].korea << " " << arr[i].english << " " << arr[i].math << endl;
    }
}