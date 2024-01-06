#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 7;
int factor[N];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        for (int i = 2; i * i <= s; i++)
        {
            if (s % i == 0)
            {
                factor[i]++;
                while (s % i == 0)
                {
                    s /= i;
                }
            }
        }
        if (s > 1)
            factor[s]++;
    }
    int ans = 1;
    for (int i = 2; i < N; i++)
    {
        ans = max(ans, factor[i]);
    }
    cout << ans << "\n";
}