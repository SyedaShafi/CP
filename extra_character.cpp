#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int ans = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] != str2[i])
        {
            ans = i + 1;
            break;
        }
    }
    if (ans == 0)
    {
        ans = str2.size();
    }
    cout << ans << endl;
}