#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
int main()
{
    long long n, k;
    cin >> n >> k;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != (n / i))
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    // for (auto x : v)
    //     cout << x << " ";
    cout << ((v.size() >= k) ? v[k - 1] : -1) << endl;
}