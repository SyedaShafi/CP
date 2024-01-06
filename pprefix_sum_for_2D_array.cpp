#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e3 + 10;
long long a[N][N];
long long p_sum[N][N];

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            p_sum[i][j] = a[i][j] + p_sum[i - 1][j] + p_sum[i][j - 1] - p_sum[i - 1][j - 1];
        }
    }
    cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << p_sum[c][d] - p_sum[a - 1][d] - p_sum[c][b - 1] + p_sum[a - 1][b - 1] << endl;
    }
}