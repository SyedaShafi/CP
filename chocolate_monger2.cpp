#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], i, dist_num = 1;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                dist_num++;
            }
        }

        if (x <= (n - dist_num))
            cout << dist_num << endl;
        else
            cout << n - x << endl;
    }
}