#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 10000 + 1;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        cout << "Case " << k << ":\n";
        int m, n, temp, ans;
        cin >> m >> n;
        vector<int> v(N + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            temp = i;
            for (int j = 2; j * j <= i; j++)
            {
                if (!(temp % j))
                {
                    while (!(temp % j))
                    {
                        v[j]++;
                        temp /= j;
                    }
                }
            }
            if (temp != 1)
                v[temp]++;
        }

        ans = INT_MAX;
        temp = m;
        for (int i = 2, cnt; i * i <= m; i++)
        {
            if (!(temp % i))
            {
                cnt = 0;
                while (!(temp % i))
                    temp /= i, cnt++;

                ans = min(ans, v[i] / cnt);
            }
        }
        if (temp > 1)
            ans = min(ans, v[temp]);

        if (ans <= 0)
            cout << "Impossible to divide" << '\n';
        else
            cout << ans << '\n';
    }
}