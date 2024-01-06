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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        multiset<int> v;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (v.size() > 0)
                {
                    ans += *v.rbegin();
                    v.erase(v.find(*v.rbegin()));
                }
            }
            else
            {
                v.insert(a[i]);
            }
        }

        cout << ans << "\n";
    }
}