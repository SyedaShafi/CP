#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz = s1.size();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    string temp = s1;
    int i = 0;
    for (int j = 0; j < sz; j++)
    {
        if (s2[j] == '?')
            i++;
    }
    int ans = 0;
    for (int j = 0; j < sz - i; j++)
    {
        for (int k = 0; k < sz; k++)
        {
            if (s2[j] == temp[k])
            {
                ans++;
                temp[k] = 's';
                break;
            }
        }
    }

    if (i == 0)
    {
        printf("%0.12f", 1.0 * 1);
    }
    else if (ans == sz - i)
    {
        int p = pow(2, i);
        int plus = 0;
        for (int k = sz - 1; k >= i; k--)
        {
            if (s1[k] == '+')
                plus++;
        }

        printf("%0.12f", (i * 1.0 / p));
    }
    else
        printf("%0.12f", 1.0 * 0);
}