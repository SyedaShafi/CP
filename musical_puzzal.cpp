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
        set<string> str;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        string ss;
        for (int i = 0; i < n - 1; i++)
        {
            ss = s.substr(i, 2);
            str.insert(ss);
        }
        cout << str.size() << "\n";
    }
}