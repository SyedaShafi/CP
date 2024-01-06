#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll temp;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                total += i;
            else
                total += (n - (i + 1));
        }
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == 'L')
            {
                temp = (n - (i + 1)) - i;
                v.push_back(temp);
            }
            else
            {
                temp = i - (n - (i + 1));
                v.push_back(temp);
            }
        }

        sort(v.begin(), v.end(), greater<ll>());

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                total += v[i];
            cout << total << " ";
        }
        cout << endl;
    }
}