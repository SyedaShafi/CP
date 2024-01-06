
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll gcd = 0;
    for (int i = 0; i < n; i++)
    {
        gcd = __gcd(gcd, a[i]);
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == gcd)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << gcd << "\n";
    else
        cout << -1 << "\n";
}