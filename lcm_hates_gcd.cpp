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
        int a, b;
        cin >> a >> b;
        int x = __gcd(a, b);
        cout << ((1LL * a * x) / __gcd(a, x)) - (__gcd(b, x)) << "\n";
    }
}