#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> user;

int main()
{
    int n = 5;
    while(n--)
    {
        string query; int score;
        cin >> query >> score;
        user[query] = score;
    }
    int min_score = 100;
    string trash_user;
    for(auto cur : user)
    {
        if(cur.second < min_score)
        {
            min_score = cur.second;
            trash_user = cur.first;
        }
    }
    cout << trash_user << " " << min_score;
}