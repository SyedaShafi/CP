#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, i, cnt = 0;
        cin >> n;
        string str;
        cin >> str;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
                cnt++;
        }
        long int ans = (cnt * (cnt + 1))/ 2;
        cout << ans << endl;
    }
}