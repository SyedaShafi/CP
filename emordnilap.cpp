#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ull unsigned long long
ull ans[N];
void fact()
{
    ans[1] = 1;
    for (int i = 2; i <= N; i++)
        ans[i] = (ans[i - 1] * i) % mod;
}

int main()
{
    int t;
    cin >> t;
    fact();
    while (t--)
    {
        ull n;
        cin >> n;
        ull res = ans[n];
        res = (res * ((n * (n - 1)) % mod)) % mod;
        cout << res << endl;
    }
}
