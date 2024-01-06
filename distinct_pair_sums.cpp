#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, diff;
        cin >> l >> r;
        diff = abs(l-r);
        cout << (diff * 2) + 1 << endl;
    }
}