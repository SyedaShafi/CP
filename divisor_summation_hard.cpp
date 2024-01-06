#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e8 + 9;
bool mark[N];
vector<ll> primes;
ll current_sum(ll p, ll a)
{
    ll ans = 1, q = p;
    for (ll i = 0; i < a; i++)
    {
        ans += p;
        p *= q;
    }
    return ans;
}
void sieve()
{
    for (ll i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    for (ll i = 2; i <= N; i++)
    {
        if (!mark[i])
            primes.push_back(i);
    }
}
int main()
{
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll tmp = n;
        ll cnt;
        ll sum = 1;
        for (ll i = 0; i < primes.size() and i * i <= n; i++)
        {
            if (n % primes[i] == 0)
            {
                cnt = 0;
                while (n % primes[i] == 0)
                {
                    cnt++;
                    n /= primes[i];
                }
                sum *= current_sum(primes[i], cnt);
            }
        }
        if (n > 1)
            sum *= n + 1;
        cout << sum - tmp << "\n";
    }
}