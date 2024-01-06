#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], i, sum = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (k > 0)
        {
            for (i = 0; i < k; i++)
            {
                if (a[i] < 0)
                    a[i] = (a[i] * (-1));
            }
            sort(a, a + n);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
                sum += a[i];
        }

        cout << sum << endl;
    }
}