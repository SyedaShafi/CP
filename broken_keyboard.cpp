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
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        if (n % 3 != 2)
        {
            for (int i = 1; i < n - 1; i += 3)
            {
                if (s[i] != s[i + 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}