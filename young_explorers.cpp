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
        int exp[n];
        for (int i = 0; i < n; i++)
            cin >> exp[i];
        sort(exp, exp + n);
        int group = 0;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            if (exp[i] <= len + 1)
            {
                group++;
                len = 0;
            }
            else
            {
                len++;
            }
        }
        cout << group << "\n";
    }
}