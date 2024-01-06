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
        ll a[n], i, mn = INT_MAX;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        
        for (i = 0; i <= n - k; i++)
        {
            mn = min(mn, (a[i+k-1] - a[i]));
        }

        cout << mn << endl;
    }
}