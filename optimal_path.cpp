#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0, temp = m;
        ans = (m * (m + 1)) / 2;
        for (ll i = 1; i < n; i++)
        {
            temp += m;
            ans += temp;
        }
        cout << ans << endl;
    }
}