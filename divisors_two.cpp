#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
int divisors[N];
bool ans[N];
vector<int> v;
int main()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            divisors[j]++;
        }
    }
    memset(ans, true, sizeof(ans));
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            if (divisors[j] <= 3 || divisors[j] % divisors[i] != 0)
                ans[j] = false;
        }
    }

    for (int i = 0; i < N; i++)
        if (ans[i])
            v.push_back(i);
    for (int i = 108; i < v.size(); i += 108)
        cout << v[i] << "\n";
}