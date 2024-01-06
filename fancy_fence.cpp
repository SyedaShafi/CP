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
        int a;
        cin >> a;
        a = 180 - a;
        if (360 % a == 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}