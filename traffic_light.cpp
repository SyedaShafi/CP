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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string str;
        cin >> str;
        str += str;
        int ans = 0, g = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == c)
            {
                g = max(g, i);
                while (g < str.length() and str[g] != 'g')
                    g++;
                ans = max(ans, g - i);
            }
        }
        cout << ans << endl;
    }
}