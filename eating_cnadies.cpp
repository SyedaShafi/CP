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
        int i = 0, j = n - 1;
        int l = 0, r = 0, cnt = 0, ans = 0;
        while (i <= j)
        {
            if (l > r)
            {
                r += a[j];
                cnt++;
                j--;
                if (r == l)
                {
                    ans += cnt;
                    cnt = 0;
                }
            }
            else if (r > l)
            {
                l += a[i];
                cnt++;
                i++;
                if (r == l)
                {
                    ans += cnt;
                    cnt = 0;
                }
            }
            else
            {
                if (i == j)
                    break;
                l += a[i];
                i++;
                r += a[j];
                j--;
                cnt += 2;
                if (l == r)
                {
                    ans += cnt;
                    cnt = 0;
                }
            }
        }

        cout << ans << "\n";
    }
}