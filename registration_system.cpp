#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    string str;
    map<string, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.push_back(str);
        mp[str].first++;
        mp[str].second++;
    }

    for (auto ele : s)
    {
        if (mp[ele].first - mp[ele].second > 0)
        {
            cout << ele << mp[ele].first - mp[ele].second << "\n";
            mp[ele].second--;
        }
        else
        {
            cout << "OK\n";
            mp[ele].second--;
        }
    }
}