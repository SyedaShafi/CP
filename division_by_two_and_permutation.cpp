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
        bool used[n + 2] = {false};
        sort(a, a + n);
        int x;
        for (int i = 0; i < n; i++)
        {
            x = a[i];
            while (x != 0)
            {
                if (x <= n and used[x] == false)
                {
                    used[x] = true;
                    x = 0;
                    break;
                }
                x /= 2;
            }
        }
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (used[i] == false)
            {
                flag = false;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}