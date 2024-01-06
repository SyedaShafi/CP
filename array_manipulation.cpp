#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 10;
ll arr[N] = {0};
ll p_sum[N] = {0};

int main()
{
    ll n, m, mx = 0, i;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }
    for (i = 1; i <= n; i++)
    {
        p_sum[i] = p_sum[i - 1] + arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (p_sum[i] > mx)
            mx = p_sum[i];
    }

    cout << mx << endl;
}