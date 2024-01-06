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
        int i, a[n], b[m + 1] = {0}, index, ans = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            if (a[i] >= 1 && a[i] <= m)
            {
                index = a[i];
                b[index]++;
            }
        }

        for (i = 0; i < m + 1; i++)
        {
            if (b[i] != 0)
                ans++;
        }

        if (ans < m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}