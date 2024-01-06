#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], i, cnt = 0, mx = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cnt++;
                mx = max(mx, cnt + 1);
            }
            else
                cnt = 0;
        }
        if (n == 1)
            cout << 0 << endl;
        else if (mx == 0)
            cout << n - 2 << endl;
        else
            cout << n - mx << endl;
    }
}