#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
bool mark[N];
vector<ll> primes;
void sieve()
{
    for (ll i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
                mark[j] = true;
        }
    }
    for (ll i = 2; i <= N; i++)
        if (!mark[i])
            primes.push_back(i);
}
int main()
{
    sieve();
    ll t;
    scanf("%lli", &t);
    while (t--)
    {
        ll a, b, ans = 1;
        scanf("%lli %lli", &a, &b);
        ll g = __gcd(a, b);
        for (int i = 0; primes[i] * primes[i] <= g; i++)
        {
            if (!(g % primes[i]))
            {
                ll cnt = 0;
                while (!(g % primes[i]))
                {
                    cnt++;
                    g /= primes[i];
                }
                cnt++;
                ans *= cnt;
            }
        }

        if (g > 1)
            ans *= 2;
        printf("%lli\n", ans);
    }
}