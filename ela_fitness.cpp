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
        ll l, r;
        cin >> l >> r;
        ll sqrt_l, sqrt_r;
        sqrt_l = sqrt(1.0L * l);
        sqrt_r = sqrt(1.0L * r);
        ll ans = (sqrt_r - sqrt_l) * 3;

        if (sqrt_l * sqrt_l < l)
            ans--;
        if (sqrt_l * sqrt_l + sqrt_l < l)
            ans--;
        
        if (sqrt_r * sqrt_r <= r)
            ans++;
        if (sqrt_r * sqrt_r + sqrt_r <= r)
            ans++;
        if (sqrt_r * sqrt_r + 2 * sqrt_r <= r)
            ans++;
        cout << ans << endl;
    }
}