#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n], i;
        ll p1_gcd[n] = {0}, p2_gcd[n + 2] = {0};
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i <= n; i++)
        {
            p1_gcd[i] = __gcd(p1_gcd[i - 1], a[i]);
        }
        for (i = n; i >= 0; i--)
        {
            p2_gcd[i] = __gcd(p2_gcd[i + 1], a[i]);
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            cout << __gcd(p1_gcd[l - 1], p2_gcd[r + 1]) << endl;
        }
    }
}