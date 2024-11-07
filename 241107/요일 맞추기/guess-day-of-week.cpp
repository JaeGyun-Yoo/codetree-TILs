#include <iostream>
#include <string>
using namespace std;
string arr[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

int main()
{
    int m1,d1,m2,d2; cin >> m1 >> d1 >> m2 >> d2;
    int month = m1; int day = d1;
    int count = 1;
    while(1)
    {
        if(month == m2 && day == d2)
        {
            cout << arr[count%7]; return 0;
        }
        if(month == 12 && day == 32) break;
        count++; day++;
        if(month == 2 && day == 29)
        {
            month++; day = 1;
        }
        else if(month % 2 == 0 && day == 31 && month != 12)
        {
            month++; day = 1;
        }
        else if(month % 2 == 1 && day == 32)
        {
            month++; day = 1;
        }
        if(month == m2 && day == d2)
        {
            cout << arr[count%7]; return 0;
        }
        if(month == 12 && day == 32) break;
    }
    count = 1; month = m1; day = d1;
    while(1)
    {
        if(month == m2 && day == d2)
        {
            cout << arr[count%7]; return 0;
        }
        count--; day--;
        if(day == 0)
        {
            if(month == 3)
            {
                month = 2; day = 28;
            }
            else if(month % 2 == 0)
            {
                month--; day = 31;
            }
            else if(month % 2 == 1)
            {
                month--; day = 30;
            }
        }
        if(month == m2 && day == d2)
        {
            cout << arr[count%7]; return 0;
        }
    }
}