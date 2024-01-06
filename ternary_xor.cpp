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
        int n, i = 0;
        cin >> n;

        string s, ans1(n, '0'), ans2(n, '0');
        cin >> s;

        while ((s[i] == '2' || s[i] == '0') && (i < n))
        {
            if (s[i] == '2')
            {
                ans1[i] = '1';
                ans2[i] = '1';
            }
            else
            {
                ans1[i] = '0';
                ans2[i] = '0';
            }
            i++;
        }

        if (i < n)
        {
            ans1[i] = s[i];
            ans2[i] = '0';
        }
        i++;
        for (int j = i; j < n; j++)
        {
            ans2[j] = s[j];
        }

        cout << ans1 << "\n"
             << ans2 << "\n";
    }
}