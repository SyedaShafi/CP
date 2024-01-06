#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int a[n], i, cnt = 1;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i + 1 < n; i++)
        {
            if (a[i] != a[i + 1])
                cnt++;
        }
        if ((n - cnt) >= x)
            cout << cnt << endl;
        else
            cout << n - x << endl;
    }
}