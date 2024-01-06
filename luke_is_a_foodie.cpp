#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll l = abs(a[0] - x), r = a[0] + x, cnt = 0;
        for (int i = 1; i < n; i++)
        {
            l = max(l, abs(a[i] - x));
            r = min(r, (a[i] + x));
            if (l > r)
            {
                l = abs(a[i] - x);
                r = a[i] + x;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}