#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> coprimes[1001];
int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                coprimes[i].push_back(j);
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a[1001];
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x].push_back(i);
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j : coprimes[i])
            {
                if (!a[i].empty() && !a[j].empty())
                {
                    ans = max(ans, a[i].back() + a[j].back());
                }
            }
        }
        cout << ans << "\n";
    }
}