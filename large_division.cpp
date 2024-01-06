#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        string str;
        ll b, ans = 0;
        cin >> str >> b;
        b = abs(b);
        cout << "Case " << cs << ": ";
        cs++;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '-')
                continue;
            ans = (ans * 10LL % b + (str[i] - '0')) % b;
        }
        if (ans == 0)
            cout << "divisible\n";
        else
            cout << "not divisible\n";
    }
}