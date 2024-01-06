#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q, d;
        cin >> a >> b >> p >> q;
        int d1, d2;
        if (p % a == 0 && q % b == 0)
        {
            d1 = p / a;
            d2 = q / b;
            d = abs(d1 - d2);
            if (d > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}