#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int M = 1e9 + 7;
int binaryExp(int n, int k)
{
    ll ans = 1;
    if (k == 0)
    {
        return 1;
    }
    while (k > 0)
    {
        if (k & 1)
        {
            ans = (ans * 1LL * n) % M;
        }
        n = (n * 1LL * n) % M;
        k >>= 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 1, p = 0;
        cin >> n >> k;
        while (k > 0)
        {
            if (k & 1)
            {
                ans = (ans + binaryExp(n, p)) % M;
            }
            p++;
            k >>= 1;
        }

        cout << ans - 1 << "\n";
    }
}