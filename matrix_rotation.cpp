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
        int r[3][3];
        int mn = INT_MAX, mx = 0, ele;
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= 2; j++)
            {
                cin >> ele;
                r[i][j] = ele;
                mn = min(mn, ele);
                mx = max(mx, ele);
            }
        }

        if ((r[1][1] == mn && r[2][2] == mx) || (r[1][1] == mx && r[2][2] == mn))
            cout << "YES\n";
        else if ((r[1][2] == mn && r[2][1] == mx) || (r[1][2] == mx && r[2][1] == mn))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}