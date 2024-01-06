#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i, j, a[n], c1, c2, ans = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            c1 = 0;
            c2 = 0;
            for (j = 0; j < n; j++)
            {
                if (a[j] <= a[i])
                    c1++;
                else
                    c2++;
            }
            if (c1 > c2)
                ans++;
        }

        cout << ans << endl;
    }
}