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
        ll n, q;
        cin >> n >> q;
        ll a[n];
        ll pre_sum[n + 2] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pre_sum[i + 1] = pre_sum[i - 1] + a[i];
        }
        
        for (int i = 0; i <= n; i++)
        {
            cout << pre_sum[i] << " ";
        }
        cout << "\n";

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll temp = pre_sum[n] - (pre_sum[r] - pre_sum[l - 1]) + (1LL * k * (r - l + 1));
            cout << temp << "\n";
            // if (temp % 2 != 0)
            // {
            //     cout << "YES\n";
            // }
            // else
            //     cout << "NO\n";
        }
    }
}