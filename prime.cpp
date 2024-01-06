#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 7;
vector<bool> v(N);
int main()
{
    int n = N - 7;
    vector<int> primes;
    v[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (!v[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                v[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!v[i])
            primes.push_back(i);
    }
    int j = 0;
    for (int i = 1; j <= primes.size(); i++)
    {
        cout << primes[j] << endl;
        j = (i * 100);
    }
}