#include <iostream>
using namespace std;
int arr[4];
int main() {
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int tmp; cin >> tmp;
            arr[j] = tmp;
        }
        int sum = 0;
        for(int k=0; k<4; k++)
        {
            sum += arr[k];
        }
        cout << sum << '\n';
    }
    return 0;
}