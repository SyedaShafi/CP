#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];
int main()
{
    int n;
    cin >> n;
    long long a[n], p_sum[N] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p_sum[i] = p_sum[i - 1] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << p_sum[r] - p_sum[l-1] << endl;
    }
}