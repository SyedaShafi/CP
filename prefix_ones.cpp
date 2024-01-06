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
        string s;
        cin >> s;
        int cnt = 0, len = 0, i, mx = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt++;
            else
                break;
        }
        // cout << "i " << i << "\n";
        for (int j = i; j < n; j++)
        {
            if (s[j] == '1')
                len++;
            else
            {
                mx = max(mx, len);
                len = 0;
            }
        }
        mx = max(mx, len);
        cout << mx + cnt << "\n";
    }
}