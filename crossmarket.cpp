#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans;
        cin >> n >> m;
        int mn, mx;
        mn = min(n, m);
        mx = max(n, m);
        int dist = abs(mx - 1) + abs(mn - 1);

        if (dist == 0)
            ans = 0;
        else
            ans = (dist * 2) - (mx - 2);

        cout << ans << endl;
    }
}