#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        string str;
        cin >> str;
        str = "0" + str + "0";
        string prev_str = str;
        while (m--)
        {
            for (i = 1; i <= n; i++)
            {
                if (prev_str[i - 1] + prev_str[i + 1] == 97)
                    str[i] = '1';
            }
            if (str == prev_str)
                break;
            prev_str = str;
        }
        for (i = 1; i <= n; i++)
            cout << str[i];
        cout << endl;
    }
}