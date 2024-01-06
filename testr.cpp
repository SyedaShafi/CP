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
        ll n, k;
        cin >> n >> k;
        ll cable = 1, h = 0, pc = 2;
        while (cable <= k and pc <= n)
        {
            h++;
            cable = (cable * 2);
            pc += cable;
        }
        pc -= cable;
        if (n > pc)
            h += ((n - pc) + (k - 1)) / k;
        cout << h << "\n";
    }
}
