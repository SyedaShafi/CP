#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, flag = 1;
        vector<pair<int, int>> v;
        cin >> n >> k;
        for (int i = 1; i <= n; i += 2)
        {
            if (((i + k) * (i + 1)) % 4 == 0)
            {
                v.push_back({i, i + 1});
            }
            else if (((i + 1 + k) * (i)) % 4 == 0)
            {
                v.push_back({i + 1, i});
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (auto ele : v)
            {
                cout << ele.first << " " << ele.second << endl;
            }
        }
    }
}