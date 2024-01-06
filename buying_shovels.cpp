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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (i != n / i)
                    v.push_back(n / i);
            }
        }
        sort(v.rbegin(), v.rend());
        int temp;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= k)
            {
                temp = v[i];
                break;
            }
        }
        cout << n / temp << "\n";
    }
}