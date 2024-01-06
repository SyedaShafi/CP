#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = INT_MAX;
        vector<pair<char, int>> v;
        int k = -1;
        for (auto ch : s)
        {
            if (k == -1 || v[k].first != ch)
            {
                v.push_back({ch, 1});
                k++;
            }
            else
            {
                v[k].second++;
            }
        }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << "\n";
        // }

        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i - 1].first != v[i + 1].first)
            {
                len = min(len, v[i].second + 2);
            }
        }
        if (len == INT_MAX)
            cout << "0\n";
        else
            cout << len << "\n";
    }
}