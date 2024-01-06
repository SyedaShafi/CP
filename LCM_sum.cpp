#include <bits/stdc++.h>
#define ll long long
#define N 1000007
using namespace std;
ll lcm_sum[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll lcm_sum = 0;
        for (int i = 1; i <= n; i++)
        {
            lcm_sum += (i * n) / __gcd(i, n);
        }
        cout << lcm_sum << endl;
    }
}