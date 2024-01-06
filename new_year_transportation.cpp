#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 1; i < n; i++)
        cin >> a[i];
    bool ok = false;
    int i = 1;
    while (i < n)
    {
        if ((i + a[i]) == t)
        {
            ok = true;
            break;
        }
        i += a[i];
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}