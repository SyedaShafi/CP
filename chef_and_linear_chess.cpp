#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], i, ans = -1, temp, cnt;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<ll>());
        for (i = 0; i < n; i++)
        {
            if (a[i] < k)
            {
                cnt = 2;
                temp = a[i];
                while (temp <= k)
                {
                    temp = a[i] * cnt;
                    cnt++;
                    if (temp % k == 0 && temp <= k)
                    {
                        ans = a[i];
                        break;
                    }
                }
                if (ans > -1)
                    break;
            }
            else if (a[i] == k)
            {
                ans = a[i];
                break;
            }
        }

        cout << ans << endl;
    }
}