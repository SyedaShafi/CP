#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        ll c[n], d[n], profit, max_profit = 0, p_sumC[n] = {0}, diff, i, p_sum, j, L, R;
        for (i = 1; i <= n; i++)
        {
            cin >> c[i] >> d[i];
            p_sumC[i] = p_sumC[i - 1] + c[i];
        }

        for (i = 1; i <= n; i++)
        {
            ll d_max = d[i], d_min = d[i];
            for (j = i; j <= n; j++)
            {
                L = i;
                R = j;

                p_sum = p_sumC[R] - p_sumC[L - 1];
                d_max = max(d_max, d[j]);
                d_min = min(d_min, d[j]);
                diff = d_max - d_min;
                profit = a * (R - L + 1) - p_sum - (diff * diff);
                max_profit = max(max_profit, profit);
            }
        }

        cout << max_profit << endl;
    }
}