#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e7 + 9;
bool mark[N];
vector<ll> primes;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll g = __gcd(a, b);
        while (b > 1 && g > 1)
        {
            b /= g;
            g = __gcd(a, b);
        }
        if (b > 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}