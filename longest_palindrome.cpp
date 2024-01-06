#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
bool isPalindrome(string s)
{
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (temp == s)
        return true;
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    string s[n], temp = "", ans = "";
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        temp = s[i];
        reverse(temp.begin(), temp.end());
        if (mp[temp] == true and !isPalindrome(s[i]))
        {
            ans += s[i];
            mp[s[i]] = false;
            mp[temp] = false;
        }
    }
    string odd_s = "";
    for (auto ele : mp)
    {
        if (ele.second == true)
        {
            bool is_palindrome = isPalindrome(ele.first);
            if (is_palindrome)
            {
                odd_s += ele.first;
                break;
            }
        }
    }
    if (odd_s == "")
    {
        temp = ans;
        reverse(temp.begin(), temp.end());
        ans += temp;
    }
    else
    {
        temp = ans;
        reverse(temp.begin(), temp.end());
        ans = ans + odd_s + temp;
    }
    cout << ans.size() << "\n";
    cout << ans << "\n";
}
