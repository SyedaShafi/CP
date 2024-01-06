#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n], i, diff, ans = INT_MAX;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i + 1 < n; i++)
        {
            diff = a[i + 1] - a[i];
            ans = min(ans, diff);
        }
        cout << ans << endl;
    }
}