#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
const int mod = 1e9 + 7;
int state[N];
int num_of_ways(int n)
{
    if (n == 0)
        return 1;
    if (state[n] != -1)
        return state[n];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += num_of_ways(n - i);
    return state[n] = ans % mod;
}
int main()
{
    int n;
    cin >> n;
    memset(state, -1, sizeof state);
    cout<<num_of_ways(n);
}