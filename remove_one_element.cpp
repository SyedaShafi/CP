#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], b[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
            cin >> b[i];
        ll len = n - 1;
        sort(a, a + n);
        sort(b, b + len);

        ll diff, cnt, diff1, diff2, mn = INT_MAX;
        vector<ll> temp;
        diff = b[0] - a[0];
        cnt = 0;
        for (i = 0; i < len; i++)
        {
            if ((diff == b[i] - a[i]) && diff > 0)
                cnt++;
            else
            {
                cnt = 0;
                break;
            }
        }

        if (cnt == len)
        {
            temp.push_back(diff);
        }

        diff = b[0] - a[1];
        cnt = 0;
        for (i = 1; i < n; i++)
        {
            if ((diff == b[i - 1] - a[i]) && diff > 0)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
                break;
            }
        }

        if (cnt == len)
            temp.push_back(diff);

        diff1 = b[0] - a[0];
        diff2 = b[n - 2] - a[n - 1];
        if (diff1 == diff2)
            temp.push_back(diff1);

        for (i = 0; i < temp.size(); i++)
        {
            if (temp[i] < mn)
                mn = temp[i];
        }
        cout << mn << endl;
    }
}
