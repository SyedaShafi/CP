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
        ll n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            if ((n & (n - 1)) == 0)
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
    }
}