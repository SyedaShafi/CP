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
        int n, d;
        cin >> n >> d;
        int r = sqrt(d);

        if ((r - 1) + (d + r - 1) / r <= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
