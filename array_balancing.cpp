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
        ll a[n], b[n], sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(a[i + 1] - a[i]);
            sum += abs(b[i + 1] - b[i]);
        }

        cout << sum << endl;
    }
}