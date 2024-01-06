#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0, ans = INT_MAX;
        int temp[n + 2] = {0}, pre_sum[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                temp[i + 1] = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + temp[i];
        }
        for (int i = 1; i <= n - k + 1; i++)
        {
            // cout << "Pre sum " << pre_sum[i] << " ";
            ans = min(ans, pre_sum[i + k - 1] - pre_sum[i - 1]);
        }
        cout << ans << "\n";
    }
}
