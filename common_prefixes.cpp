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
        string ans(52, 'a');
        cout << ans << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i]; j < 52; j++)
            {
                if (ans[j] == 'a')
                    ans[j] = 'b';
                else
                    ans[j] = 'a';
            }
            cout << ans << "\n";
        }
    }
}