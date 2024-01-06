#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, a[10], ans = 10, k;
        for (i = 0; i < 10; i++)
            cin >> a[i];

        cin >> k;
        for (i = 9; i >= 0; i--)
        {
            if (a[i] <= k)
            {
                k = k - a[i];
                ans = i ;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }
}