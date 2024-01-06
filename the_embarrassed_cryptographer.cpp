#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 9;
bool mark[N];
vector<ll> primes;
int main()
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
        if (!mark[i])
            primes.push_back(i);

    while (true)
    {
        string K;
        ll l;
        cin >> K >> l;
        if (K == "0" || l == 0)
            break;
        ll spf = 1;
        for (ll i = 0; i < primes.size() && primes[i] < l; i++)
        {
            ll ans = 0;
            for (ll j = 0; j < K.size(); j++)
            {
                ans = (ans * 10 + (K[j] - '0')) % primes[i];
            }
            if (ans == 0)
            {
                spf = primes[i];
                break;
            }
        }

        if (spf > 1)
            cout << "BAD " << spf << "\n";
        else
            cout << "GOOD\n";
    }
}