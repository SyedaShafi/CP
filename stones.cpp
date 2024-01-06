#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string j, s;
        cin >> j >> s;
        int i, k, cnt = 0;

        for (i = 0; i < s.length(); i++)
        {
            for (k = 0; k < j.length(); k++)
            {
                if (s[i] == j[k])
                {
                    cnt++;
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
}