#include <iostream>
using namespace std;
int arr[100];

int main() {
    string n; cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        arr[n[i] - 'a']++;
    }
    for(int i=0; i<100; i++)
    {
        if(arr[i] != 0)
        {
            while(arr[i] != 0)
            {
                cout << char(i + 'a');
                arr[i]--;
            }
        }
    }
    return 0;
}