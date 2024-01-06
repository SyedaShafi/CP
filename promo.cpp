#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e7;
ll arr[N];
ll pre_sum[N];
int main()
{
    ll n, q, x, y, i;
    cin >> n >> q;
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr, arr + n + 1);
    for (i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }
    while (q--)
    {
        cin >> x >> y;
        ll point = (n - x) + y;
        cout << pre_sum[point] - pre_sum[point - y] << endl;
    }
}