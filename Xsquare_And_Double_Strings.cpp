#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int a[26] = {0}, i, cnt = 0;

        for (i = 0; i < str.size(); i++)
        {
            a[str[i] - 'a']++;
        }

        for (i = 0; i < 26; i++)
        {
            if (a[i] == 1)
            {
                cnt++;
            }
        }

        if (cnt == str.size())
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}