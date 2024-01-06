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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;

        vector<char> v(n);
        for (int i = 0; i < n; i++)
            v[i] = '0';
        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            char ch = s[i];
            for (int j = 0; j < n; j++)
            {
                if (a[j] == temp && v[j] == '0')
                    v[j] = ch;
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == v[i])
                cnt++;
        }
        if (cnt == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}