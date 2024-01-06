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
        int n, cnt = 0;
        cin >> n;
        int l[n], r[n], mn = INT_MAX, mx = 0, f1 = 0, f2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
            mn = min(mn, r[i]);
            mx = max(mx, l[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (l[i] != l[i + 1])
            {
                f1 = 1;
            }
            if (r[i] != r[i + 1])
            {
                f2 = 1;
            }
        }

        if (n == 1 || f1 == 0 || f2 == 0)
        {
            cout << 0 << "\n";
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (l[i] <= mn && r[i] >= mx)
                    cnt++;
            }
            // cout<<"min "<<mn<<" max "<<mx<<"\n";
            // cout << "cnt " << cnt << "\n";
            if (cnt == n)
                cout << 0 << "\n";
            else
                cout << abs(mn - mx) << "\n";
        }
    }
}