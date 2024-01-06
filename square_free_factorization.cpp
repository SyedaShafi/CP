// The key idea is to make every factor as a product of distinct
// prime, so they won’t be divisible by any square number. We know
// that a^x is divisible by a^2 when x>1. To ensure this we have to
// make at least k factors, where k is the maximum power of a prime
// exits in the prime factorization. That’s all…
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
        int n, flag = 0;
        cin >> n;
        int mx = 0, cnt;
        map<int, int> mp;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cnt = 0;
                while (n % i == 0)
                {
                    cnt++;
                    n /= i;
                }
                mp[i] = cnt;
            }
        }
        if (n > 1)
            mp[n] = 1;

        for (auto it : mp)
        {
            if (it.second > mx)
                mx = it.second;
        }
        cout << mx << endl;
    }
}