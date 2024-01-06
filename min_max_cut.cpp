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
        int zero = 0, one = 0, f = 1, first_zero, last_zero;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        first_zero = s.find('0');
        last_zero = s.rfind('0');
        if (zero == 0)
            cout << 0 << "\n";
        else if (one == 0)
            cout << 1 << "\n";
        else if (last_zero - first_zero + 1 == zero)
        {
            cout << 1 << "\n";
        }
        else
            cout << 2 << "\n";
    }
}