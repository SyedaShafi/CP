#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;

    cin >> s;
    s = '_' + s;
    int temp[s.size() + 2] = {0};
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            temp[i] = temp[i - 1] + 1;
        }
        else
        {
            temp[i] = temp[i - 1];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << temp[r] - temp[l] << "\n";
    }
}