#include <bits/stdc++.h>
#define ll long long int
// #define ll_max
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, ans = 0;
        cin >> n >> m;
        ll a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        ll prefix_sum[n + 1] = {0}, min_pre_sum = LLONG_MAX;
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
            min_pre_sum = min(min_pre_sum, prefix_sum[i]);
        }

        if (min_pre_sum == prefix_sum[m])
        {
            cout << 0 << "\n";
            continue;
        }

        min_pre_sum = prefix_sum[m];

        priority_queue<ll> mxHeap;
        for (int i = m; i >= 1; i--)
        {
            if (prefix_sum[i] < min_pre_sum)
            {
                while (!mxHeap.empty() and prefix_sum[i] < min_pre_sum)
                {
                    ll x = mxHeap.top();
                    mxHeap.pop();
                    min_pre_sum -= (2LL * x);
                    ans++;
                }
            }
            mxHeap.push(a[i]);
        }

        min_pre_sum = prefix_sum[m];

        priority_queue<ll, vector<ll>, greater<ll>> mnHeap;
        for (int i = m + 1; i <= n; i++)
        {
            mnHeap.push(a[i]);
            if (prefix_sum[i] < min_pre_sum)
            {
                while (!mnHeap.empty() and prefix_sum[i] < min_pre_sum)
                {
                    ll x = mnHeap.top();
                    mnHeap.pop();
                    min_pre_sum += (2LL * x);
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}