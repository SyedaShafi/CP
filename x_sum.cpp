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
        int n, m;
        cin >> n >> m;
        int a[n + 2][m + 2];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }

        int mx = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                sum = a[i][j];
                int l = i - 1, k = j - 1;
                while (l > 0 and k > 0)
                {
                    sum += a[l][k];
                    l--, k--;
                }
                l = i - 1;
                k = j + 1;
                while (l > 0 and k <= m)
                {
                    sum += a[l][k];
                    l--, k++;
                }
                l = i + 1;
                k = j + 1;
                while (l <= n and k <= m)
                {
                    sum += a[l][k];
                    l++, k++;
                }
                l = i + 1;
                k = j - 1;
                while (l <= n and k > 0)
                {
                    sum += a[l][k];
                    l++, k--;
                }
                mx = max(mx, sum);
            }
        }

        cout << mx << "\n";
    }
}