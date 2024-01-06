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
        string s, temp;
        cin >> s;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j] and (i % 2) != (j % 2))
                {
                    ok = false;
                    break;
                }
            }
            if (ok == false)
                break;
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}