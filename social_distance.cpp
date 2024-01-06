#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n], sum = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {

            sum += max(a[i], a[i + 1]);
        }
        sum += max(a[n - 1], a[0]);
        if (n >= m)
            cout << "NO\n";
        else
        {
            ll avail_chair = m - n;
            ll required_chair = sum;

            if (avail_chair < required_chair)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}
