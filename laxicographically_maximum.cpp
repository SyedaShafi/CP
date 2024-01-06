#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    vector<int> ans(26, 0);
    char temp = 'a';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != temp and s[i] > temp)
        {
            temp = s[i];
        }
        if (s[i] == temp)
        {
            ans[s[i] - 'a']++;
        }
    }
    
    for (int i = 25; i >=0; i--)
    {
        if (ans[i] > 0)
        {
            for (int j = 0; j < ans[i]; j++)
            {
                cout << char(i + 'a');
            }
        }
    }
    cout << "\n";
}
