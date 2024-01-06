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
        ll d, n;
        cin >> d >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll sum = 0, rem = 0, ans = 0;
        ll m[d];
        memset(m, 0, sizeof(m));
        m[0] = 1;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            rem = sum % d;
            if (m[rem] != 0)
                ans += m[rem];
            m[rem]++;
        }
        cout << ans << endl;
    }
}