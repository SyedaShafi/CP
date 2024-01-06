#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans1, ans2, mn = 1e9;
    if (m * a <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        int num_of_m = n / m;
        ans2 = num_of_m * b;
        int rem = n - (m * num_of_m);
        mn = min(mn, ans2 + (rem * a));
        mn = min(mn, ans2 + b);
        cout << mn << endl;
    }
}