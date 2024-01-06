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
        int len = 0, mx_len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
                len++;
            else
            {
                mx_len = max(mx_len, len);
                len = 0;
            }
        }

        if (len != 0)
            mx_len = max(mx_len, len);

        cout << mx_len + 1<< "\n";
    }
}