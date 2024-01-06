#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e5;
vector<ll> divisors[N];
vector<ll> primes;
bool mark[N];
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
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    sieve();
    ll d;
    for (ll i = 1; i <= N; i++)
    {
        ll temp = i;
        d = 1;
        for (ll j = 0; j < primes.size() && primes[j] * primes[j] <= temp; j++)
        {
            ll cnt = 0;
            if (temp % primes[j] == 0)
            {
                while (temp % primes[j] == 0)
                {
                    cnt++;
                    temp /= primes[j];
                }
                d = d * (2 * cnt + 1);
            }
        }
        if (temp > 1)
            d = d * 3;
        divisors[d].push_back(i * i);
    }
    ll t;
    scanf("%lld", &t);
    ll k, low, high;
    while (t--)
    {
        scanf("%lld %lld %lld", &k, &low, &high);
        // cout << << endl;
        auto l = lower_bound(divisors[k].begin(), divisors[k].end(), low) - divisors[k].begin();
        auto u = upper_bound(divisors[k].begin(), divisors[k].end(), high) - divisors[k].begin();
        printf("%lld\n", u - l);
    }
}