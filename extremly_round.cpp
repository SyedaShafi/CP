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
        int n;
        cin >> n;
        int ans;
        if (n >= 1 and n <= 9)
            ans = n;
        else if (n >= 10 and n <= 99)
        {
            ans = (n / 10) + 9;
        }
        else if (n >= 100 and n <= 999)
        {
            ans = (n / 100) + 18;
        }
        else if (n >= 1000 and n <= 9999)
        {
            ans = (n / 1000) + 27;
        }
        else if (n >= 10000 and n <= 99999)
        {
            ans = (n / 10000) + 36;
        }
        else if (n >= 100000 and n <= 999999)
        {
            ans = (n / 100000) + 45;
        }
        cout << ans << "\n";
    }
}