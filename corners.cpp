#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m], sum = 0, cnt = 0;
        int mn = 100000;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                a[i][j] = s[j] - '0';
                sum += a[i][j];
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                cnt = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
                if (cnt == 0)
                    continue;
                mn = min(mn, max(1, cnt - 1));
            }
        }

        if (sum == 0)
            cout << 0 << endl;
        else
            cout << sum - mn + 1 << endl;
    }
}