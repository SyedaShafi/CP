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
        int sz = s.size();
        string temp1(sz, '0'), temp2(sz, '1');
        // cout << temp1 << " " << temp2;
        if (temp1 == s || temp2 == s)
        {
            cout << s << "\n";
        }
        else
        {
            if (s[0] == '0')
            {
                for (int i = 0; i < sz; i++)
                    cout << "01";
                cout << "\n";
            }
            else
            {
                for (int i = 0; i < sz; i++)
                    cout << "10";
                cout << "\n";
            }
        }
    }
}