#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
bool mark[N];
ll v[N];
int main()
{
    memset(mark, true, sizeof(mark));
    for (ll i = 2; i * i <= N; i++)
    {
        if (mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                mark[j] = false;
            }
        }
    }
    for (ll i = 2; i <= N; i++)
    {
        if (mark[i])
            v[i] = v[i - 1] + 1;
        else
            v[i] = v[i - 1];
    }
    ll t;
    scanf("%lli", &t);
    while (t--)
    {
        ll n, cnt = 0;
        scanf("%lli", &n);
        cnt = v[n] - v[n / 2];
        printf("%lli\n", cnt);
    }
}