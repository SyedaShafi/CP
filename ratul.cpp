#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    getline(cin, s);
    string temp = "Ratul";
    string ss = "";
    bool f = false;
    for (int i = 0; i < s.size() - 5 + 1; i++)
    {
        ss = s.substr(i, 5);
        // cout << ss << "\n";
        if (ss == temp and (i - 1 == -1 || s[i - 1] == ' ') and (i + 5 == s.size() || s[i + 5] == ' '))
        {
            f = true;
            break;
        }
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}