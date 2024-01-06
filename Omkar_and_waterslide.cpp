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
        ll op = 0, len = 0, i;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                len++;
            }
            else
            {

                // cout << a[i - len] << " " << a[i] << "\n";
                op += (a[i - len] - a[i]);
                len = 0;
            }
        }
        if (len != 0)
        {
            op += (a[i - len] - a[i]);
        }
        cout << op << "\n";
    }
}