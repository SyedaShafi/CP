#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int p;
void spf(int n)
{
    for (int i = 2; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
        {
            p = i;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        p = 0;
        spf(n);
        // cout << p << "\n";
        int p1 = 0, p2 = 0;
        if (p > 0)
        {
            int temp = n / p;
            if (temp % 2 == 0)
            {
                // cout << temp << "\n";
                for (int i = p + 1; 1LL * i * i <= temp; i++)
                {
                    if (temp % i == 0 and (temp / i) != i and (temp / i) != p)
                    {
                        p1 = i;
                        p2 = temp / i;
                        break;
                    }
                }
                if (1LL * p * p1 * p2 == n)
                {
                    cout << "YES\n";
                    cout << p << " " << p1 << " " << p2 << "\n";
                }
                else
                    cout << "NO\n";
            }
            else
            {
                for (int i = p + 1; 1LL * i * i <= temp; i++)
                {
                    if (temp % i == 0 and (temp / i) != i and (temp / i) != p)
                    {
                        p1 = i;
                        p2 = temp / i;
                        break;
                    }
                }
                if (1LL * p * p1 * p2 == n)
                {
                    cout << "YES\n";
                    cout << p << " " << p1 << " " << p2 << "\n";
                }
                else
                    cout << "NO\n";
            }
        }

        else
            cout << "NO\n";
    }
}