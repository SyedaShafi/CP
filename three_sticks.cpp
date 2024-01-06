
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
        int ans = a[2] - a[0], temp, diff;
        for (int i = 3; i < n; i++)
        {
            ans = min(ans, a[i] - a[i - 2]);
        }
        cout << ans << "\n";
    }
}