#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    int present[28] = {0};
    bool flag = true;
    if (s[0] == 'a')
        present[0] = 1;
    for (int i = 0; i < s.size(); i++)
    {
        present[s[i] - 'a' + 1]++;
        if (present[s[i] - 'a'] == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}