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
        cin>> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }
        int len = st.size();
        // cout << "Len " << len << "\n";
        bool flag = true;
        for (int i = 0; i < s.size() - len; i++)
        {
            if (s[i] != s[i + len])
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}