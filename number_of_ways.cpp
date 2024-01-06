#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
const int mod = 1e9 + 7;
int state[N];
int num_of_ways(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;
    if (state[n] != -1)
        return state[n];
    return state[n] = num_of_ways(n - 1) + num_of_ways(n - 3) % mod;
}
int main()
{
    int n;
    cin >> n;
    memset(state, -1, sizeof state);
    cout << num_of_ways(n) << endl;
}