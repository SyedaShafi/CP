#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        ll n, fact = 1, j, temp, cnt = 0;
        cin >> n;
        vector<int> v(n + 1, 0);
        for (int i = 2; i <= n; i++)
        {
            temp = i;
            for (j = 2; j * j <= i; j++)
            {
                if (!(temp % j))
                {
                    while (!(temp % j))
                    {
                        v[j]++;
                        temp /= j;
                    }
                }
            }
            if (temp > 1)
                v[temp]++;
        }
        cout << "Case " << k << ": " << n << " = ";
        for (int i = 2; i <= n; i++)
        {
            if (v[i])
                cnt++;
        }
        cnt--;
        for (int i = 0; i <= n; i++)
        {
            if (v[i])
            {
                cout << i << " (" << v[i] << ")";

                if (cnt > 0)
                {
                    cout << " * ";
                    cnt--;
                }
            }
        }
        cout << endl;
    }
}