#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m, k;
    int temp[1000 + 7] = {0};
    cin >> n >> m >> k;
    int r[n], c[n], i, j, mn, index, ans = 0;
    for (i = 0; i < n; i++)
        cin >> r[i] >> c[i];

    for (j = 0; j < n; j++)
    {
        mn = INT_MAX;
        for (i = 0; i < n; i++)
        {
            if (c[i] < mn)
            {
                mn = c[i];
                index = i;
            }
        }

        c[index] = INT_MAX;
        if (temp[r[index]] == 0)
        {
            ans += mn;
            temp[r[index]] = 1;
        }
    }

    if (ans > k)
        cout << k << endl;
    else
        cout << ans << endl;
}