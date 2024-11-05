#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

struct weather
{
    int year;
    int month;
    int day;
    string week;
    string what;
};

bool compare(weather* cur, weather* nxt)
{
    if(cur->year != nxt->year) {
        return cur->year < nxt->year;
    }
    if(cur->month != nxt->month) {
        return cur->month < nxt->month;
    }
    return cur->day < nxt->day;
}
int main()
{
    int n; cin >> n;
    weather* arr[100];
    for(int i=0; i<n; i++)
    {
        string a,b,c; cin >> a >> b >> c;
        arr[i] = new weather;
        arr[i]->year = stoi(a.substr(0,4));
        arr[i]->month = stoi(a.substr(5,2));
        arr[i]->day = stoi(a.substr(8,2));
        arr[i]->week = b;
        arr[i]->what = c;
    }
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++)
    {
        if(arr[i]->what == "Rain")
        {
            cout<< arr[i]->year<<"-"<<setw(2)<<setfill('0')<<arr[i]->month<<"-"<<setw(2)<<setfill('0')<<arr[i]->day<<" "<<arr[i]->week<<" "<<arr[i]->what;
            break;
        }
    }
}