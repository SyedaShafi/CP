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
        ll a[n], i, mul = 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            mul = mul * 1LL * a[i];
        }

        if (mul % 10 == 2 || mul % 10 == 3 || mul % 10 == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}