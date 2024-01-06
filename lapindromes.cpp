#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = 0, cnt1, cnt2, i, j;
        for (i = 0; i < str.length() / 2; i++)
        {
            cnt1 = 0;
            cnt2 = 0;
            for (j = 0; j < str.length() / 2; j++)
            {
                if (str[i] == str[j])
                    cnt1++;
            }
            if (str.length() % 2 == 0)
            {
                for (j = str.length() / 2; j < str.length(); j++)
                {
                    if (str[i] == str[j])
                        cnt2++;
                }
            }
            if (str.length() % 2 != 0)
            {
                for (j = str.length() / 2 + 1; j < str.length(); j++)
                {
                    if (str[i] == str[j])
                        cnt2++;
                }
            }

            if (cnt1 == cnt2)
                len++;
        }

        if (len == str.length() / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}