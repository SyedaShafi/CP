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
        string s;
        cin >> s;
        ll a[n];
        vector<ll> v;
        ll ans = 0, mn = INT_MAX, f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' and v.size() > 0)
            {
                if (f == 1)
                {
                    sort(v.begin(), v.end());
                    for (int i = v.size() - 1; i > 0; i--)
                    {
                        ans += v[i];
                    }
                    v.clear();
                    f = 0;
                }
                else
                {
                    sort(v.begin(), v.end());
                    for (int i = v.size() - 1; i >= 0; i--)
                    {
                        ans += v[i];
                    }
                    v.clear();
                    f = 0;
                }
            }
            else if (s[i] == '1')
            {
                if ((i - 1 >= 0) and (f == 0) and (s[i - 1] == '0'))
                {
                    v.push_back(a[i - 1]);
                    f = 1;
                }
                v.push_back(a[i]);
            }
        }

        if (v.size() > 0)
        {

            if (f == 1)
            {
                sort(v.begin(), v.end());
                for (int i = v.size() - 1; i > 0; i--)
                {
                    ans += v[i];
                }
            }
            else
            {
                sort(v.begin(), v.end());
                for (int i = v.size() - 1; i >= 0; i--)
                {
                    ans += v[i];
                }
            }
        }
        cout << ans << "\n";
    }
}
