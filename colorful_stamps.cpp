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
        bool flag = true, ft = true;
        int cnt = 0, init = -1;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (ft == true)
                {
                    init = i;
                    ft = false;
                }
                cnt++;
            }
            else if (cnt > 0)
            {
                s.erase(init, cnt);
                cnt = 0;
                i = init;
                ft = true;
            }
        }
        if (cnt > 0)
            s.erase(init, cnt);

        // cout << s << "\n";

        if (s.size() == 1 and (s[0] == 'B' || s[0] == 'R'))
            flag = false;
        if (flag)
            for (int i = 0; i < s.size(); i++)
            {
                if (i - 1 >= 0 and i + 1 < s.size())
                {
                    if (s[i - 1] == 'W' and s[i + 1] == 'W')
                    {
                        flag = false;
                        break;
                    }
                }
                else if (i - 1 < 0 and i + 1 < s.size())
                {
                    if (s[i + 1] == 'W')
                    {
                        flag = false;
                        break;
                    }
                }
                else if (i - 1 >= 0 and i + 1 >= s.size())
                {
                    if (s[i - 1] == 'W')
                    {
                        flag = false;
                        break;
                    }
                }
            }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}