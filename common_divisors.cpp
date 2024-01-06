#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, gcd;
    cin >> n;
    vector<ll> v(n);
    vector<ll> divisors;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    gcd = v[0];
    for (int i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, v[i]);
    }
    for (int i = 1; (1LL * i * i) <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            divisors.push_back(i);
            if (i != gcd / i)
                divisors.push_back(gcd / i);
        }
    }
    cout << divisors.size() << endl;
}