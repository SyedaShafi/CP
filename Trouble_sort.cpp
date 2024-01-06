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
        int b[n];
        int ele = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ele += b[i];
        }

        if (ele < n and ele > 0)
            cout << "YES\n";
        if (ele == n || ele == 0)
        {
            bool ok = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
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
}