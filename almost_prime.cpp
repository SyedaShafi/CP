#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 3e3 + 7;
vector<int> primes;
bool mark[N];
void sieve()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
            primes.push_back(i);
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    int cnt = 0, temp, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        cnt = 0;
        for (int j = 0; primes[j] * primes[j] <= temp && j < primes.size(); j++)
        {
            if (temp % primes[j] == 0)
            {
                cnt++;
                while (temp % primes[j] == 0)
                {
                    temp /= primes[j];
                }
            }
        }
        if (temp > 1)
            cnt++;
        // cout << "n : " << i << " cnt " << cnt << "\n";
        if (cnt == 2)
            ans++;
    }
    cout << ans << endl;
}