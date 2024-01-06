#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << (r * 2) - (l * 2) + 1 << endl;
    }
}