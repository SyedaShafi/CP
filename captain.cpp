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
        int eight = 1 + (n / 4);
        if (n % 4 == 0)
            eight--;

        bool f = false;
        for (int i = 1; i <= n - eight; i++)
            cout << 9;

        for (int i = 1; i <= eight; i++)
            cout << 8;
        cout << "\n";
    }
}