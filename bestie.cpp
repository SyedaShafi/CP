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
        ll a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll gcd = a[1];
        for (int i = 2; i <= n; i++)
        {
            gcd = __gcd(gcd, a[i]);
        }

        if (gcd == 1)
        {
            cout << 0 << "\n";
        }
        else if (__gcd(gcd, n) == 1)
        {
            cout << 1 << "\n";
        }
        else if (__gcd(gcd, n - 1) == 1)
        {
            cout << 2 << "\n";
        }
        else
            cout << 3 << "\n";
    }
}