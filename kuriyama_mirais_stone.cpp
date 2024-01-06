#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    ll presum_a[n + 3] = {0};
    ll presum_v[n + 3] = {0};
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
        presum_a[i + 1] = presum_a[i] + a[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        presum_v[i + 1] = presum_v[i] + v[i];
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << presum_a[i] << " " << presum_v[i] << "\n";
    // }

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << presum_a[r] - presum_a[l - 1] << "\n";
        }
        else
        {
            cout << presum_v[r] - presum_v[l - 1] << "\n";
        }
    }
}