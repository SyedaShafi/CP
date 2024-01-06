#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < k; i++)
            cin >> a[i];
        sort(a, a + k);
        int ans = 0;
        int diff = 0, cat_pos = 0, r = k - 1;
        while (cat_pos < a[r] and r >= 0)
        {
            diff = n - a[r];
            if (a[r] + diff > (cat_pos + diff - 1))
                ans++;
            cat_pos += diff;
            r--;
        }

        cout << ans << "\n";
    }
}