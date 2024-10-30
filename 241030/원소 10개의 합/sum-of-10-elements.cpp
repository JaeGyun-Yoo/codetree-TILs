#include <iostream>
using namespace std;

int main() {
    int a = 0;
    for(int i=0; i<10; i++)
    {
        int x; cin >> x;
        a += x;
    }
    cout << a;
    return 0;
}