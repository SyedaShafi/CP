#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int M = 1e6 + 7;
bool mark[M];
vector<ll> primes;

void seive()
{
    int i, j;
    for (i = 2; i * i <= M; i++)
    {
        if (!mark[i])
        {
            for (j = i * i; j <= M; j += i)
                mark[j] = 1;
        }
    }
    for (i = 2; i < M; i++)
        if (!mark[i])
            primes.push_back(i);
}

int main()
{
    ll t;
    cin >> t;
    seive();

    for (int k = 1; k <= t; k++)
    {
        ll n, i, j, cnt, ans = 1;
        cin >> n;
        for (i = 0; primes[i] * primes[i] <= n; i++)
        {
            cnt = 0;
            while (!(n % primes[i]))
            {
                cnt++;
                n /= primes[i];
            }
            if (cnt)
                ans *= (cnt + 1);
        }
        if (n > 1)
            ans *= 2;
        cout << "Case " << k << ": ";
        cout << ans - 1 << endl;
    }
}