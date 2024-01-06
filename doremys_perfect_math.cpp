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
        int n, flag = 0, gcd;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        gcd = __gcd(a[0], a[1]);

        for (int i = 2; i < n; i++)
        {
            gcd = __gcd(gcd, a[i]);
        }
        cout << a[n - 1] / gcd << "\n";
    }
}