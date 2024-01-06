#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r, flag = 0, temp, i;
        cin >> n >> l >> r;
        vector<ll> v;

        for (i = 1; i <= n; i++)
        {
            temp = (l / i);
            if ((l % i) != 0)
            {
                temp++;
            }
            if ((temp == i) && (temp >= l) && (temp <= r))
            {
                v.push_back(temp);
            }
            else if (((i * temp) >= l) && ((i * temp) <= r))
            {
                v.push_back(temp * i);
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if ((flag == 1) && (v.size() != n))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}