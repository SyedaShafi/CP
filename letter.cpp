#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 2], b[m + 2];
    ll presum[n + 2] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        presum[i] = presum[i - 1] + a[i];
    }

    for (int i = 1; i <= m; i++)
        cin >> b[i];

    vector<pair<ll, ll>> p;
    int j = 1;
    for (int i = 1; i <= m; i++)
    {
        if ((j <= n) and b[i] <= presum[j] and b[i] >= presum[j - 1])
        {
            p.push_back({j, (b[i] - presum[j - 1])});
        }
        else
        {
            j++;
            i--;
        }
    }
    for (auto it : p)
    {
        cout << it.first << " " << it.second << "\n";
    }
}
