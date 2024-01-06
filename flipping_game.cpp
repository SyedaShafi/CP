#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n], one = 0, max_sum, cur_sum;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        one += a[i];
        if (a[i] == 1)
            a[i] = -1;
        else
            a[i] = 1;
    }
    if (one == n)
    {
        cout << one - 1 << "\n";
        return 0;
    }
    max_sum = 0, cur_sum = 0;
    for (int k = 0; k < n; k++)
    {
        cur_sum = max(0, a[k] + cur_sum);
        max_sum = max(max_sum, cur_sum);
    }
    // cout << max_sum << "\n";
    cout << max_sum + one << "\n";
}