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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll sum = 0;
        bool ok = true;
        if (a[0] > 1)
            ok = false;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < a[i + 1] and i + 1 < n)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}