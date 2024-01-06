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
        if (n == 3)
            cout << "NO\n";
        else if (n & 1)
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
            {

                if (i & 1)
                {
                    cout << "-" << (n / 2) - 1 << " ";
                }
                else
                {
                    cout << n / 2 << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
            {
                if (i & 1)
                {
                    cout << 1 << " ";
                }
                else
                    cout << -1 << " ";
            }
            cout << "\n";
        }
    }
}