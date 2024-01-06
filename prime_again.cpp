#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
const int N = 1e6 + 1;
bool mark[N];
bool isPrime(ll x)
{
    for (ll i = 2; 1LL * i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ll t;
    scanf("%llu", &t);
    while (t--)
    {
        ll n;
        scanf("%llu", &n);
        for (ll i = n - 1; i > 1; i--)
        {
            if (isPrime(i))
            {
                printf("%llu\n", i);
                break;
            }
        }
    }
}