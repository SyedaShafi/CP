#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll a[n], mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll gcd = mx - a[0];
    ll ans = mx - a[0];
    for (int i = 1; i < n; i++)
    {
        ans += (mx - a[i]);
        gcd = __gcd(gcd, mx - a[i]);
    }
    cout << ans / gcd << " " << gcd << endl;
}