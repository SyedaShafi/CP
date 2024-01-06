#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    vector<pair<int, int>> v;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1 < n) and (a[i] == a[i + 1]))
            cnt++;
        else
        {
            v.push_back({a[i], cnt});
            cnt = 1;
        }
    }
    // for (auto e : v)
    // {
    //     cout << e.first << " " << e.second << " \n";
    // }
    int sz = v.size();
    ll presum[sz + 2] = {0};
    bool flag = true;
    for (int i = 0; i < sz; i++)
    {
        presum[i + 1] = presum[i] + v[i].second;
        if (presum[i + 1] == k)
        {
            flag = false;
            cout << v[i].first << "\n";
            break;
        }
        if (presum[i + 1] > k)
            break;
    }
    if (flag)
    {
        if (k == 0 and a[0] > 1)
            cout << a[0] - 1 << "\n";
        else if (k == 0 and a[0] == 1)
            cout << -1 << "\n";
        else
            cout << -1 << "\n";
    }
}