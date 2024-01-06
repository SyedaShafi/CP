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
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int ans;
        if (a[0] == 0)
            ans = 0;
        else
            ans = 1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < (i + 1) and (a[i + 1] > (i + 1) or (i + 1) == n))
                ans++;
        }

        cout << ans << "\n";
    }
}