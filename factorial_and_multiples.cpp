#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll k, a = 0;
    cin >> k;
    map<ll, ll> m;
    for (ll i = 2; i * i <= k; i++)
    {
        a = 0;
        if (k % i == 0)
        {
            while (k % i == 0)
            {
                k /= i;
                a++;
            }
        }
        m[i] = a;
    }
    if (k > 1)
    {
        m[k] = 1;
    }
    ll temp, ans = 1, tt;
    for (auto x : m)
    {
        temp = 0;
        ll prime = x.first, power = x.second;
        while (power > 0)
        {
            temp += prime;
            tt = temp;
            while (tt % prime == 0)
            {
                tt /= prime;
                power--;
            }
        }
        ans = max(ans, temp);
    }

    cout << ans << "\n";
}