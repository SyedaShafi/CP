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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 0)
        {
            cout << s << "\n";
            for (int i = 0; i < n; i++)
                cout << 0 << " ";
            cout << endl;
        }
        else
        {
            if (s[0] == '1')
            {
                if (k % 2 == 0)
                {
                    cout << s << endl;
                    cout << k << " ";
                    for (int i = 1; i < n; i++)
                        cout << 0 << " ";
                    cout << endl;
                }
                else
                {
                    for (int i = 1; i < s.length(); i++)
                    {
                        if (s[i] == '0')
                            s[i] = '1';
                        else
                            s[i] = '0';
                    }
                    cout << s << endl;
                    cout << k << " ";
                    for (int i = 1; i < n; i++)
                        cout << 0 << " ";
                    cout << endl;
                }
            }
            else
            {
                s[0] = '1';
                for (int i = 2; i < n; i++)
                {
                    if (s[i] == '0')
                        s[i] = '1';
                    else
                        s[i] = '0';
                }

                if (k % 2 != 0)
                {

                    cout << s << "\n";
                    cout << k - 1 << " ";
                    if (k >= 1)
                        cout << 1 << " ";
                    for (int i = 2; i < n; i++)
                    {
                        cout << 0 << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    for (int i = 1; i < n; i++)
                    {
                        if (s[i] == '0')
                            s[i] = '1';
                        else
                            s[i] = '0';
                    }
                    cout << s << "\n";
                    cout << k - 1 << " ";
                    if (k >= 1)
                        cout << 1 << " ";
                    for (int i = 2; i < n; i++)
                    {
                        cout << 0 << " ";
                    }
                    cout << "\n";
                }
            }
        }
    }
}