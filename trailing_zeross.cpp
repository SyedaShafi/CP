#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll calTrailing_zeros(ll mid)
{
    ll ans = 0;
    for (ll i = 5; i <= mid; i *= 5)
    {
        ans += mid / i;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll q;
        cin >> q;
        cout << "Case " << i << ": ";
        ll low = 1, high = 1e18, ans = -1;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll trailing_zeros = calTrailing_zeros(mid);
            if (trailing_zeros < q)
                low = mid + 1;
            else if (trailing_zeros > q)
                high = mid - 1;
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }
        if (ans == -1)
            cout << "impossible\n";
        else
            cout << ans << endl;
    }
}