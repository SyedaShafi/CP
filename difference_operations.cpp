#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] % a[0] != 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}