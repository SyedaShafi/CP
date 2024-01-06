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
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (ans != a[i])
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
        if (a[n - 1] == ans)
            ans++;
        cout << ans << "\n";
    }
}