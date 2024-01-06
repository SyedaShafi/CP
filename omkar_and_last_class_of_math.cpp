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
        int i = 1;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << "\n";
            continue;
        }
        int a = 1, b = n - 1;
        for (i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                a = n / i;
                b = n - a;
                break;
            }
        }

        cout << a << " " << b << "\n";
    }
}