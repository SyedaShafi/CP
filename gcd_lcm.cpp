#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int g = __gcd(a, b);
        cout << g << " " << ((1LL * a * b) / g);
        cout << endl;
    }
    return 0;
}
