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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int l = 0, r = n - 1;
        int ans = 0;
        while (l <= r)
        {
            ans += a[r] - a[l];
            r--, l++;
        }
        cout << ans << "\n";
    }
}