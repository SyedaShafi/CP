#include <bits/stdc++.h>
using namespace std;
const int N = 2e7 + 1;
bool mark[N];
vector<int> prime;
vector<int> twin_prime;
int main()
{
    for (int i = 2; 1LL * i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = 1LL * i * i; j <= N; j += i)
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

    for (int i = 0; i < prime.size() - 1; i++)
    {
        if (prime[i + 1] - prime[i] == 2)
        {
            twin_prime.push_back(prime[i]);
        }
    }
    int spp;
    while (cin >> spp)
    {
        cout << "(" << twin_prime[spp - 1] << ", " << twin_prime[spp - 1] + 2 << ")\n";
    }
}