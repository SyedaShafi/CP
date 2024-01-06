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
        string s, temp = "Yes", ss;
        cin >> s;
        for (int i = 1; i <= 18; i++)
        {
            ss += temp;
        }

        if (ss.find(s) != string::npos)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}