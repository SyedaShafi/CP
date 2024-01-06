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
        int n, x;
        cin >> n >> x;
        int a[n];
        int sum = 0, len = 0, cur_len = n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % x != 0)
            cout << n << "\n";
        else
        {
            bool lft = false, rgt = false;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (a[l] % x != 0)
                {
                    lft = true;
                    l++;
                    break;
                }
                else if (a[r] % x != 0)
                {
                    rgt = true;
                    break;
                }
                else
                {
                    l++;
                    r--;
                }
            }
            if (lft)
                len = n - l;
            else if (rgt)
                len = r;
            if (len > 0)
                cout << len << "\n";
            else
                cout << -1 << "\n";
        }
    }
}