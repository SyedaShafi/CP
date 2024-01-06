#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6;
int main()
{
    double digits[N + 2];
    digits[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        digits[i] = digits[i - 1] + log10(i);
    }
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << cs << ": ";
        ll n, base, ans;
        cin >> n >> base;
        ans = digits[n] / log10(base) + 1;
        cout << ans << endl;
        cs++;
    }
}