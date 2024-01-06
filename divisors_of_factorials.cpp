#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int M = 1e9 + 7;
const int N = 5e5 + 2;
bool mark[N];
vector<int> prime;
long long divisors_cnt[N];
void sieve()
{
    for (int i = 2; 1LL * i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = 1LL * i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        ll tprime = 1, ans = 1;
        for (int i = 0; prime[i] <= n; i++)
        {
            cnt = 0;
            tprime = 1;
            while (tprime * prime[i] <= n)
            {
                tprime *= prime[i];
                cnt += n / tprime;
            }
            ans *= 1LL * (cnt + 1);
            ans %= M;
        }
        cout << ans << endl;
    }
}