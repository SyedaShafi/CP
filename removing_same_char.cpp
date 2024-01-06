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
        string s;
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.size(); i++)
        {
            if ((!stk.empty()) and (stk.top() == s[i]))
                stk.pop();
            else
                stk.push(s[i]);
        }
        while (!stk.empty())
        {
            cout << stk.top() << " ";
            stk.pop();
        }
        cout << "\n";
    }
}