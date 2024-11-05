#include <iostream>
using namespace std;

struct spy
{
    string secret_code;
    string meet_place;
    int time;
};

int main()
{
    spy a;
    cin >> a.secret_code;
    cin >> a.meet_place;
    cin >> a.time;

    cout << "secret code : " << a.secret_code << endl;
    cout << "meeting point : " << a.meet_place << endl;
    cout << "time : " << a.time << endl;
}