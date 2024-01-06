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

        ll mx = a[0], j = 0, mn = a[0], sum = 0;
        bool neg = false, pos = false;

        if (a[0] > 0)
            pos = true;
        else if (a[0] < 0)
            neg = true;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 and pos == false)
            {
                mn = a[i];
                j = i;
                while (a[j] < 0 and j < n)
                {
                    mn = max(mn, a[j]);
                    j++;
                }
                v.push_back(mn);
                i = j - 1;
                neg = false;
                pos = true;
            }
            else if (a[i] > 0 and neg == false)
            {
                mn = a[i];
                j = i;
                while (a[j] > 0 and j < n)
                {
                    mn = max(mn, a[j]);
                    j++;
                }
                v.push_back(mn);
                i = j - 1;
                neg = true;
                pos = false;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        cout << sum << "\n";
    }
}