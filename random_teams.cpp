#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll mn = 0, mx = 0;
    ll temp = (n - m + 1);
    mx = (temp * (temp - 1)) / 2;
    temp = n / m;
    ll rem = n % m;
    mn = (m - rem) * ((temp * (temp - 1)) / 2);
    temp++;
    mn = mn + rem * ((temp * (temp - 1)) / 2);
    cout << mn << " " << mx << "\n";
}
