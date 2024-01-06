#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int a[n], i, ans_k = 0, ans_c = 0, mn;
        mn = min(k, (n-k));
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (i < mn)
                ans_k += a[i];
            else if (i >= mn)
                ans_c += a[i];
        }

        cout << abs(ans_c - ans_k) << endl;
    }
}