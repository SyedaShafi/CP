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

        int i = n - 1, ans = 0, cnt = 0;
        while (i >= 0)
        {
            if (a[n - 1] == a[i])
            {
                cnt++;
                i--;
            }
            else
            {
                cnt *= 2;
                ans++;
                i = n - cnt - 1;
            }
        }
        cout << ans << "\n";
    }
}