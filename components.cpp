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
        int ans = 0;
        vector<int> s;
        for (int i = 1; i * i <= n; i++)
        {
            s.push_back(i * i);
        }
        int sz = s.size();
        bool x[n + 2] = {0};
        for (int i = 1; i <= n; i++)
        {
            if (!x[i])
            {
                ++ans;
                x[i] = true;
            }
            for (int j = 0; j < sz; j++)
            {
                if (1LL * i * s[j] <= n)
                    x[1LL * i * s[j]] = true;
                    
            }
        }
        cout << ans << "\n";
    }
}