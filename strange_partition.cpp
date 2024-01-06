#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll ele, sum_min = 0, sum_max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            sum_min += ele;
            sum_max += (ele % x == 0 ? ele / x : (ele / x) + 1);
        }
        cout << (sum_min % x == 0 ? sum_min / x : (sum_min / x) + 1) << " " << sum_max << "\n";
    }
}