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
        string str1, str2, res;
        cin >> str1 >> str2;
        cout << "Case " << cs << ": ";
        cs++;
        int p = 8, ans = 0;
        for (int i = 0; i < str2.size(); i++)
        {
            p--;
            if (str2[i] == '1')
            {
                ans += pow(2, p);
            }
            if (str2[i] == '.')
            {
                p = 8;
                // cout << "Ans " << ans << endl;
                res.append(to_string(ans));
                res += '.';
                ans = 0;
            }
        }
        res.append(to_string(ans));
        // cout << res << endl;
        if (str1 == res)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}