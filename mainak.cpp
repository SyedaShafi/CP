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
        int n, m, tmp = 0, rem;
        cin >> n >> m;
        if (n > m)
            cout << "NO\n";
        else
        {
            int ans = m / n;
            if (n % 2 != 0)
            {
                cout << "YES\n";
                for (int i = 0; i < n - 1; i++)
                    cout << ans << " ";
                cout << ans + (m % n) << "\n";
            }
            else
            {
                if (m % n == 0)
                {
                    cout << "YES\n";
                    for (int i = 0; i < n; i++)
                    {
                        cout << ans << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    rem = m % n;
                    if (rem % 2 == 0)
                    {
                        cout << "YES\n";
                        for (int i = 0; i < n - 2; i++)
                        {
                            cout << ans << " ";
                        }
                        cout << ans + (rem / 2) << " ";
                        cout << ans + (rem / 2);
                        cout << "\n";
                    }
                    else
                        cout << "NO\n";
                }
            }
        }
    }
}