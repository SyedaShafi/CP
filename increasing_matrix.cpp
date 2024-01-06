#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, m, mn, f = 1;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = m - 1; j > 0; j--)
        {
            if (a[i][j] == 0)
            {
                mn = min(a[i][j + 1], a[i + 1][j]);
                a[i][j] = mn - 1;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << a[i][j] << " ";
    //     cout << "\n";
    // }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if ((a[i][j] >= a[i + 1][j]) || (a[i][j] >= a[i][j + 1]))
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
            break;
    }
    if ((a[n - 1][m - 1] <= a[n - 1][m - 2]) || (a[n - 1][m - 1] <= a[n - 2][m - 1]))
        f = 0;

    if (f == 0)
        cout << -1 << "\n";
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                sum += a[i][j];
        cout << sum << "\n";
    }
}