#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> primes;
bool mark[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (!mark[i])
        {
            for (int j = i * i; j <= n; j += i)
                mark[j] = true;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!mark[i])
            primes.push_back(i);
    }
    cout << primes.size() << "\n";
    for (auto ele : primes)
    {
        cout << ele << " ";
    }
    cout << endl;
}