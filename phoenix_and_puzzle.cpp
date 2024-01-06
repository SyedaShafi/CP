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
        int n, f = 0;
        cin >> n;
        int no_of_bits = log2(n);
        if (n == (1 << no_of_bits) and no_of_bits > 0)
            cout << "YES\n";
        else if (n % 2 == 0)
        {
            while (n % 2 == 0)
            {
                n = n / 2;
                ll srt = sqrt(n);
                if (n == 1LL * srt * srt)
                {
                    cout << "YES\n";
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                cout << "NO\n";
            }
        }
        else
            cout << "NO\n";
    }
}