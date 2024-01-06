#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool allSame(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
            return false;
    }
    return true;
}

bool no_one(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            return false;
    }
    return true;
}

bool no_zero(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '?' and allSame(s))
        {
            cout << s.size() << "\n";
        }
        else if (s[0] == '1' and allSame(s))
        {
            cout << 1 << "\n";
        }
        else if (s[0] == '0')
        {
            cout << 1 << "\n";
        }
        else
        {
            int ans = 0;
            if (no_one(s))
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '0')
                    {
                        ans++;
                        break;
                    }
                    else
                    {
                        ans++;
                    }
                }
            }

            else if (no_zero(s))
            {
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == '1')
                    {
                        ans++;
                        break;
                    }
                    else
                        ans++;
                }
            }
            else
            {
                int index = -1;
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == '1')
                    {
                        index = i;
                        break;
                    }
                }
                for (int i = index; i < s.size(); i++)
                {
                    if (s[i] == '0')
                    {
                        ans++;
                        break;
                    }
                    else
                        ans++;
                }
            }

            cout << ans << "\n";
        }
    }
}