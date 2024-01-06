// Given an array of integer numbers, we need to find maximum
// size of a subset such that sum of each pair of this subset
// is not divisible by K.
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int f[k];
    memset(f, 0, sizeof(f));
    for (int i = 0; i < n; i++)
    {
        f[a[i] % k]++;
    }
    if (k % 2 == 0)
    {
        f[k / 2] = min(f[k / 2], 1);
    }
    int res = min(f[0], 1);
    for (int i = 1; i <= k / 2; i++)
    {
        res += max(f[i], f[k - i]);
    }
    cout << res << endl;
}