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
        ll ans = 0;

        ll positive = INT_MAX, negative = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0 and a[i] < positive)
            {
                positive = a[i];
            }
            else if (a[i] < 0 and a[i] > negative)
            {
                negative = a[i];
            }
        }

        // cout << positive << " " << abs(negative) << "\n";

        ans = min(positive, (abs(negative)));
        cout << ans - 1 << "\n";
    }
}