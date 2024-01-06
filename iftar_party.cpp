#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<ll> divisors;
        ll p, l;
        cin >> p >> l;
        cout << "Case " << i << ": ";
        ll n = p - l;
        for (ll i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                if (i > l)
                    divisors.push_back(i);
                if ((n / i != i) && (n / i > l))
                    divisors.push_back(n / i);
            }
        }
        sort(divisors.begin(), divisors.end());
        if (divisors.size() == 0)
            cout << "impossible" << endl;
        else
        {
            for (auto x : divisors)
                cout << x << " ";
            cout << endl;
        }
    }
}