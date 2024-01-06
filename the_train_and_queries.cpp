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
        int n, k, ele;
        cin >> n >> k;
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            mp[ele].push_back(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (mp[a].size() == 0 or mp[b].size() == 0)
                cout << "NO\n";
            else
            {
                int i = mp[a][0];
                int j = mp[b][mp[b].size() - 1];
                if (i < j)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
}