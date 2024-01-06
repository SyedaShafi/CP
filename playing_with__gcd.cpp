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
        ll n;
        cin >> n;
        ll a[n], b[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[0] = a[0];
        b[n] = a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            b[i + 1] = (a[i] * a[i + 1]) / __gcd(a[i], a[i + 1]);
        }
        int f = 1;
        if (n == 1)
            cout << "YES\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (__gcd(b[i], b[i + 1]) != a[i])
                {
                    cout << "NO\n";
                    f = 0;
                    break;
                }
            }
            if (f == 1)
                cout << "YES\n";
        }
    }
}