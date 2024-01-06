#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<string> s;
        int n;
        cin >> n;
        while (n--)
        {
            string str;
            cin >> str;
            s.insert(str);
        }

        for (string value : s)
        {
            cout << value << endl;
        }
    }
}