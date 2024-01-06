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
        string x;
        cin >> x;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] = 9 - (x[i] - '0');
        }
        if (ans[0] == 0)
        {
            int temp = 2;
            for (int i = n - 1; i >= 0; i--)
            {
                ans[i] = ans[i] + temp;
                if (ans[i] > 9 and i != 0)
                {
                    ans[i] = (ans[i] % 10);
                    temp = 2;
                }
                else
                {
                    temp = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << "\n";
    }
}