#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, a, b, c;
    cin >> n;
    cin >> a >> b >> c;
    int mx = 0;
    for (int x = 0; x <= 4000; x++)
    {
        for (int y = 0; y <= 4000; y++)
        {
            int zc = n - (a * x + y * b);
            if (zc < 0)
                break;
            if (zc % c == 0)
            {
                int z = zc / c;
                mx = max(mx, x + y + z);
            }
        }
    }
    cout << mx << "\n";
}
