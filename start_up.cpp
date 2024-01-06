#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s, str;
    cin >> s;
    string letters = "AHIMOTUVWXY";
    bool ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (letters.find(s[i]) == string::npos)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        str = s;
        reverse(str.begin(), str.end());
    }
    if (ok and str == s)
        cout << "YES\n";
    else
        cout << "NO\n";
}