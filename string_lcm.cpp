#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string str1, str2, s, t;
        cin >> s >> t;
        str1 = s;
        str2 = t;
        int len, len1=s.length(), len2=t.length(), s_len, t_len;
        len = (len1 / __gcd(len1, len2)) * len2;
        s_len = len / len1;
        t_len = len / len2;
        for (int i = 1; i < s_len; i++)
        {
            str1 += s;
        }
        for (int i = 1; i < t_len; i++)
        {
            str2 += t;
        }
        // cout << "Str1 : " << str1 << " str2 : " << str2 << " \n";
        if (str1 == str2)
            cout << str1 << "\n";
        else
            cout << -1 << "\n";
    }
}