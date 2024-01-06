#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n;

    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int i, j, count = 0;
        for (i = 0; i < s.length(); i++)
        {
            for (j = 0; j < str.length(); j++)
            {
                if (s[i] == str[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == s.length())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}