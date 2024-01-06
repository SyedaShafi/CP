#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        cout << "Case " << i << ":\n";
        while (q--)
        {
            ll s1, s2;
            cin >> s1 >> s2;
            ll *ptr1 = lower_bound(a, a + n, s1);
            ll *ptr2 = upper_bound(a, a + n, s2);
            cout << (ptr2 - ptr1) << endl;
        }
    }
}