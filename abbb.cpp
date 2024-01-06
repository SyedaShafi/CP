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
        int i = 0;
        while (i < s.size() - 1)
        {
            if (s.size() == 0 or s.size() == i)
                break;

            if ((s[i] == 'A' and s[i + 1] == 'B') || (s[i] == 'B' and s[i + 1] == 'B'))
            {
                int pos = i;
                s.erase(pos, 2);
                if (i > 0)
                    i--;
                // cout << s << "\n";
            }
            else
            {
                i++;
            }
        }
        cout << s.size() << "\n";
    }
}
