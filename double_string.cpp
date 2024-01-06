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
        int n;
        cin >> n;
        string s[n];
        map<string, bool> mp;
        int ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        string pre, aft;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < s[i].size(); j++)
            {
                pre = s[i].substr(0, j);
                aft = s[i].substr(j, s[i].size() - (j));
                if (mp[pre] == true and mp[aft] == true)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << endl;
    }
}