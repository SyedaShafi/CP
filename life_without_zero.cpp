#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string a, b;
    cin >> a >> b;
    ll sum = stoi(a) + stoi(b);
    string s = to_string(sum);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
        {
            a.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '0')
        {
            b.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            i--;
        }
    }
    // cout << "a b s " << a << " " << b << " " << s << "\n";
    int sa = 0, sb = 0, st = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sa = sa * 10 + a[i] - '0';
    }
    for (int i = 0; i < b.size(); i++)
    {
        sb = sb * 10 + b[i] - '0';
    }
    for (int i = 0; i < s.size(); i++)
    {
        st = st * 10 + s[i] - '0';
    }
    // cout << "sa sb st " << sa << " " << sb << " " << st << "\n";
    if (sa + sb == st)
        cout << "YES\n";
    else
        cout << "NO\n";
}