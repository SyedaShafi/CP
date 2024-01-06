#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        if (n == 1)
        {
            if (a[0] > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
        {
            if ((a[n - 1] - a[n - 2]) > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}