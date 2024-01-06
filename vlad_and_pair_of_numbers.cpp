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
        int x;
        cin >> x;
        if (x % 2)
            cout << -1 << "\n";
        else
        {
            int a, b;
            a = x + (x / 2);
            b = x / 2;

            if ((a ^ b) == x)
                cout << a << " " << b << "\n";
            else
                cout << -1 << "\n";
        }
    }
}