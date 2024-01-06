#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
    }
    bool flag = true;
    string ans = "", temp = "";
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0 and a[i] % k == 0)
        {
            for (int j = 0; j < a[i] / k; j++)
            {
                ans += char(i + 97);
            }
        }
        else if (a[i] % k != 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        for (int j = 0; j < k; j++)
        {
            temp += ans;
        }
        if (temp.size() == s.size())
            cout << temp << "\n";
        else
            cout << -1 << "\n";
    }
    else
        cout << -1 << "\n";
}