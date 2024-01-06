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
        ll x, y;
        cin >> x >> y;
        ll cnt = 0;
        if (__gcd(x, y) > 1)
            cout << 0 << "\n";
        else if (y - x == 1)
            cout << -1 << "\n";
        else
        {
            ll gcd = __gcd(x, y);
            while (gcd == 1)
            {
                x++;
                y++;
                cnt++;
                gcd = __gcd(x, y);
            }
            cout << cnt << "\n";
        }
    }
}