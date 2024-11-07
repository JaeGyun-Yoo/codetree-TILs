#include <iostream>
#include <string>
using namespace std;

string arr[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

int daysInMonth(int month) {
    if (month == 2) return 28;  // 윤년을 고려하지 않으므로 2월은 28일
    else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int month = m1, day = d1;
    int count = 1;

    while (true) {
        if (month == m2 && day == d2) {
            cout << arr[count % 7];
            return 0;
        }

        day++;
        count++;

        if (day > daysInMonth(month)) {
            day = 1;
            month++;
            if (month > 12) {month = 1; count--;}
        }
    }
}