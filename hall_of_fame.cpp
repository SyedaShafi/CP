
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
        int n, index = -1;
        cin >> n;
        string s;
        cin >> s;
        bool f = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == 'R' and s[i] == 'L')
                f = true;
        }
        if (!f)
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i - 1] == 'L' and s[i] == 'R')
                {
                    index = i;
                }
            }
        }
        if (f)
        {
            cout << 0 << "\n";
        }
        else if (index != -1)
        {
            cout << index << "\n";
        }
        else
            cout << -1 << "\n";
    }
}
