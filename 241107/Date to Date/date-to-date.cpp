#include <iostream>
using namespace std;

int main()
{
    int m1,d1,m2,d2; cin >> m1 >> d1 >> m2 >> d2;
    int month = m1; int day = d1;
    int answer = 0;
    if(month == m2 && day == d2)
    {
        cout << 1; return 0;
    }
    while(1)
    {
        if(month == m2 && day == d2) break;
        answer++;
        day++;
        if(month == m2 && day == d2) break;
        if(month == 2)
        {
            if(day == 29)
            {
                month++;
                day=1;
            }
        }
        if(month == m2 && day == d2) break;
        else if(month % 2 == 0)
        {
            if(day == 31)
            {
                month++;
                day=1;
            }
        }
        if(month == m2 && day == d2) break;
        else if(month % 2 == 1)
        {
            if(day == 32)
            {
                month++;
                day=1;
            }
        }
        if(month == m2 && day == d2) break;
    }
    cout << answer;
}