#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll total_sum = 0, no_of_odd_ele = 0, no_of_even_ele = 0, odd_sum = 0, even_sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            total_sum += x;
            if (x % 2 == 0)
            {
                no_of_even_ele++;
            }
            else
            {
                no_of_odd_ele++;
            }
        }

        for (ll i = 0; i < q; i++)
        {
            ll type, m;
            cin >> type >> m;

            if (type == 0)
            {
                total_sum += (no_of_even_ele * m);
                cout << total_sum << "\n";
                if (m % 2 != 0)
                {

                    no_of_odd_ele = n;
                    no_of_even_ele = 0;
                }
            }
            else
            {
                total_sum += (no_of_odd_ele * m);
                cout << total_sum << "\n";
                if (m % 2 != 0)
                {
                    no_of_even_ele = n;
                    no_of_odd_ele = 0;
                }
            }
        }
    }
}