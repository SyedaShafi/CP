#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll total_count(int *a, int n)
{
    ll cnt = 0, ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cnt++;
        else
        {
            ans1 += cnt;
        }
    }
    return ans1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans, index = -1;
        ans = total_count(a, n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                index = i;
                break;
            }
        }
        ans = max(ans, total_count(a, n));
        if (index != -1)
            a[index] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        ans = max(ans, total_count(a, n));
        cout << ans << "\n";
    }
}