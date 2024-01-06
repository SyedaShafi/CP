#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<ll> ans(n);

        ans[0] = (k * b);

        ll remaining_s = s - ans[0];

        if (remaining_s < 0)
            cout << -1 << endl;

        else
        {
            ans[0] += min(k - 1, remaining_s);
            remaining_s -= min(k - 1, remaining_s);
            for (ll i = 1; i < n; i++)
            {
                if (remaining_s == 0)
                    ans[i] = 0;
                else
                {
                    ans[i] = min(k - 1, remaining_s);
                    remaining_s -= ans[i];
                }
            }

            if (remaining_s != 0)
                cout << -1 << endl;
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    cout << ans[i] << " ";
                }
                cout << endl;
            }
        }
    }
}