#include <bits/stdc++.h>
#define N 500001
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, temp, sum = 0;
        cin >> n;
        for (int i = 1; 1LL * i * i <= n; i++)
        {
            if (!(n % i))
            {
                sum += i;
                if (i != (n / i))
                    sum += (n / i);
            }
        }
        cout << sum - n
             << endl;
    }
}