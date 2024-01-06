#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, ans = 0, power = 1;
        cin >> n;
        string str;
        cin >> str;

        for (i = n - 1; i >= 0; i--)
        {
            if (str[i] - '0' == 1)
                ans = ans + power;
            power = power * 2;
        }
        cout << ans << endl;
    }
}