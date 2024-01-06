#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int days = 0;
        set<char> s1;
        for (int i = 0; i < s.size(); i++)
        {
            s1.insert(s[i]);
            if (s1.size() > 3)
            {
                days++;
                i--;
                s1.clear();
            }
        }

        if (s1.size() > 0)
            days++;
        cout << days << endl;
    }
}