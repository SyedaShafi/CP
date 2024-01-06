#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0, p;
        int a[26] = {0};
        string s;
        cin >> s >> p;

        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {

            ans = ans + (a[i] * (i + 1));
        }

        int j = 25;
        while (ans > p && j >= 0)
        {
            if (a[j] == 0)
                j--;
            else
            {
                a[j]--;
                ans -= j + 1;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (a[s[i] - 'a'] != 0)
            {
                cout << s[i];
                a[s[i] - 'a']--;
            }
        }
        cout << endl;
    }
}