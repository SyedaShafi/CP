#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], ans = 0, zeros = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
            if (a[i] == 0)
                zeros++;
        }

        ans -= a[n - 1];
        if (a[n - 1] == 0)
            zeros--;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 0)
                cnt++;
            else
                break;
        }

        cout << ans + zeros - cnt << endl;
    }
}