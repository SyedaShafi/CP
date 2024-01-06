#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans *= a[i];
        }
        ans += (n - 1);
        cout << ans * 2022 << "\n";
    }
}