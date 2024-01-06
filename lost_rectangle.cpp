#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll a;
    cin >> a;
    ll ans = 1e18, temp = 0;
    for (ll i = 1; 1LL * i * i <= a; i++)
    {
        if (a % i == 0)
        {
            temp = 2 * (i + (a / i));
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;
}