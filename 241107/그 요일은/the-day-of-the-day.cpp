#include <iostream>
#include <string>
using namespace std;
string arr[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
bool days_in_month(int a, int b)
{
    if(a == 2)
    {
        return b <= 29;
    }
    if(a == 2 || a == 4 || a == 6 || a == 9 || a == 11)
    {
        return b <= 30;
    }
    return b <= 31;
}

int main()
{
    int m1,d1,m2,d2; cin >> m1 >> d1 >> m2 >> d2;
    int month = m1; int day = d1;
    string target; cin >> target;
    int target_num;
    int answer = 1;
    
    for(int i=0; i<7; i++)
    {
        if(target == arr[i]) {target_num = i; break;}
    }

    while(1)
    {
        if(month == m2 && day == d2) break;
        answer++; day++;
        if(!days_in_month(month,day))
        {
            month++; day = 1;
        }
    }





    int count = answer%7;
    int ans = answer/7;
    if(target_num >= count)
    {
        cout << ans + 1;
    }
    else
    {
        cout << ans;
    }
}