#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << char(i + 97);
            }
            cout << "\n";
            break;
        }
    }
}