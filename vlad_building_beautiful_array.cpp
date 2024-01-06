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
        sort(a, a + n);
        bool flag = true;
        if (a[0] % 2 == 0)
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {

                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}