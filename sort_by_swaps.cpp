#include <bits/stdc++.h>
#define ll long long int
const ll temp = 1e12 + 9;
using namespace std;
int main()
{
    ll n, cnt = 0;
    cin >> n;
    ll a[n], i, s_a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s_a[i] = a[i];
    }

    pair<ll, ll> p[n];

    sort(s_a, s_a + n);
    for (i = 0; i < n; i++)
    {
        auto it = find(a, a + n, s_a[i]);
        ll dist = distance(a, it);
        if (dist > i)
        {
            p[cnt] = make_pair(i, dist);
            swap(a[i], a[dist]);
            a[i] = temp;
            cnt++;
        }
        if (dist == i)
            a[i] = temp;
    }
    cout << cnt << endl;
    for (i = 0; i < cnt; i++)
        cout << p[i].first << " " << p[i].second << endl;
}