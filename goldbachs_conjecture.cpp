#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
bool mark[N];
vector<int> prime;
int main()
{
    for (int i = 2; 1ll * i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = 1ll * i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
            prime.push_back(i);
    }

    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        cout << "Case " << k << ": ";
        int cnt = 0;
        for (int i = 0; i < prime.size(); i++)
        {
            if ((prime[i] < n) && (!mark[n - prime[i]]))
            {
                cnt++;
                if (prime[i] == n - prime[i])
                    cnt++;
            }
        }
        cout << cnt / 2 << endl;
    }
}