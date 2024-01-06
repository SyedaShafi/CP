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
        vector<pair<int, int>> m;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    m[i].first++;
                    n /= i;
                }
            }
        }
        if (n > 0)
            m[n].first++;
        ll ans = 0, mx = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
          
        }

        cout << m.size() << "\n";
    }
}