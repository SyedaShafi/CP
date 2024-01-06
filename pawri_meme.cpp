#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int i;
        for (i = 0; i < str.length(); i++)
        {
            if ((str[i] == 'p' && str[i + 1] == 'a' && str[i + 2] == 'r' && str[i + 3] == 't' && str[i + 4] == 'y') && (i + 5) <= str.length())
            {

                str[i] = 'p';
                str[i + 1] = 'a';
                str[i + 2] = 'w';
                str[i + 3] = 'r';
                str[i + 4] = 'i';
                i += 4;
            }
        }

        cout << str << endl;
    }
}