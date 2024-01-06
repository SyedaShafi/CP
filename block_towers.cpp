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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a + 1, a + n);
        ll def, rem;

        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[0])
            {
                def = a[i] - a[0];
                a[0] += (def / 2) + (def % 2);
            }
        }
        cout << a[0] << "\n";
    }
}