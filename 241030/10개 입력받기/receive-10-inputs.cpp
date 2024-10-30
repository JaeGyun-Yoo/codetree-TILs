#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    int count = 0;
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0) {count = i; break;}
    }
    if(count != 0)
    {
    for(int i=0; i<count; i++)
    {
        sum += arr[i];
    }
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            sum += arr[i];
        }
        count = 10;
    }

    float avg = (float)sum / count;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    
    return 0;
}