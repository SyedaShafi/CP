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
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int temp = sum / 9;

        if (a < temp || b < temp || c < temp)
            cout << "NO\n";
        else if (sum % 9 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}