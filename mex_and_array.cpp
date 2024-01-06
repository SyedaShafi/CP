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
        int ans = 0;
        int temp = n;
        for (int i = 1; i <= n; i++)
        {
            ans += temp * i;
            temp--;
        }
        // cout << "ANS: " << ans << "\n";
        int len = 1, cnt = 0;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            len = 1, cnt = 0;
            int j = i;
            while (j < n)
            {
                if (len == cnt)
                {
                    j = i;
                    len++;
                    cnt = 0;
                }
                else
                {
                    if (a[j] == 0)
                        ans++;
                    cnt++;
                    j++;
                }
            }
        }

        cout << ans << "\n";
    }
}