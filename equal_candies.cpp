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
        int a[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        int ans = 0;
        for (i = 1; i < n; i++)
        {
            ans += (a[i] - a[0]);
        }
        cout << ans << endl;
    }
}