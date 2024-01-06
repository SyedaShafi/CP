#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
bool mark[N];
vector<ll> primes;
int main()
{
    ll a, b;
    cin >> a >> b;
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
    // cout << primes.size() << endl;
    // for (int i = 0; i <= 10; i++)
    //     cout << primes[i] << " ";

    vector<bool> segmented_primes(b - a + 1, true);

    for (ll i = 0; primes[i] * primes[i] <= b; i++)
    {

        // just nearest possible value which is less than or equal to the number "a"
        ll sm = (a / primes[i]) * primes[i];

        if (sm < a)
            sm += primes[i];

        // mark all the multiple of primes as false
        for (ll value = sm; value <= b; value += primes[i])
            segmented_primes[value - a] = false;

        // if sm and the current prime is equal then that should remain prime
        if (sm == primes[i])
            segmented_primes[sm - a] = true;
    }

    for (ll i = a; i <= b; i++)
    {
        if (segmented_primes[i - a] == true)
            cout << i << endl;
    }
}