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
        int a[5] = {0}, len, cnt = 0, i, j;
        len = str.length();
        if (len >= 10)
        {
            a[0] = 1;
            for (i = 0; i < len; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    a[1] = 1;
                    break;
                }
            }
            for (i = 1; i < len - 1; i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    a[2] = 1;
                    break;
                }
            }
            for (i = 1; i < len - 1; i++)
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    a[3] = 1;
                    break;
                }
            }
            for (i = 1; i < len - 1; i++)
            {
                if (str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?')
                {
                    a[4] = 1;
                    break;
                }
            }
        }

        for (j = 0; j < 5; j++)
        {
            if (a[j] == 1)
                cnt++;
        }

        if (cnt == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}