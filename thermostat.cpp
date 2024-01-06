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
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        else if (a < b)
        {
            if (abs(b - a) >= x)
                ans = 1;
            else if (b + x <= r || a - x >= l)
                ans = 2;
            else if (abs(r - a) >= x and abs(b - l) >= x)
                ans = 3;
            else
                ans = -1;
        }
        else
        {
            if (abs(a - b) >= x)
                ans = 1;
            else if (b - x >= l || a + x <= r)
                ans = 2;
            else if (abs(r - b) >= x and abs(a - l) >= x)
                ans = 3;
            else
                ans = -1;
        }
        cout << ans << "\n";
    }
}