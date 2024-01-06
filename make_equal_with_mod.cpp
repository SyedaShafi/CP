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
        ll n, zero = 0, one = 0, mn = INT_MAX, f = 1;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero = 1;
            if (a[i] == 1)
                one = 1;
        }
        sort(a, a + n);
        if (zero == 1 and one == 1)
            f = 0;
        else if (one == 1)
        {
            for (int i = 1; i < n; i++)
            {
                if ((a[i] - a[i - 1]) == 1 and a[i] != 0 and a[i] != 1)
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
