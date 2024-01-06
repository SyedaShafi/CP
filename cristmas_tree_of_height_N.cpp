#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n][n], i, j;
        a[0][0] = 1;
        for (i = 1; i < n; i++)
        {
            a[i][0] = 1;
            a[i][i] = 1;
            for (j = 1; j < i; j++)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i+1; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}