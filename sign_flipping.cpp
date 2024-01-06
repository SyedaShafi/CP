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
        ll temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                temp = a[i] + a[i];
                a[i] = a[i] - (temp);
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (i & 1)
            {
                if (a[i] - a[i - 1] < 0)
                {
                    a[i - 1] = a[i - 1] - (a[i - 1] + a[i - 1]);
                }
            }
            else
            {
                if (a[i] - a[i - 1] > 0)
                {
                    a[i] = a[i] - (a[i] + a[i]);
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}