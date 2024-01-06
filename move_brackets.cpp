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
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else
            {
                if (!st.empty() and st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        cout << st.size() / 2 << "\n";
    }
}