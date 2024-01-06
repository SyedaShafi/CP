#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
int main()
{
    ll x;
    cin >> x;
    ll srt = sqrt(x);
    map<ll, ll> p;
    for (ll j = 1; j <= srt; j++)
    {
        if (x % j == 0)
            p[j] = x / j;
    }

    for (auto pr = p.rbegin(); pr != p.rend(); pr++)
    {
        if (lcm(pr->first, pr->second) == x)
        {
            cout << pr->first << " " << pr->second << "\n";
            break;
        }
    }
}