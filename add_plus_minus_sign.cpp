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
        string s;
        cin >> s;
        int res;
        if (s[0] == '1')
            res = 1;
        else if (s[0] == '0')
            res = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' and res == 1)
            {
                cout << "-";
                res = 0;
            }
            else if (s[i] == '1' and res == 0)
            {
                cout << "+";
                res = 1;
            }
            else if (s[i] == '0' and res == 0)
            {
                cout << "+";
                res = 0;
            }
            else if (s[i] == '0' and res == 1)
            {
                cout << "+";
                res = 1;
            }
        }
        cout << "\n";
    }
}