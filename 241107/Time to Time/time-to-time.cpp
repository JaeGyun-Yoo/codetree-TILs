#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    int time = a; int minute = b;
    int answer = 0;

    while(1)
    {
        if(time == c && minute == d) break;
        answer++;
        minute++;
        if(minute==60)
        {
            time++;
            minute=0;
        }
    }
    cout << answer;
}