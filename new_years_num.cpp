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
        int rem = n % 2020;
        ll temp = rem * 2021;
        ll num = n - temp;
        if (num >= 0 && num % 2020 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}