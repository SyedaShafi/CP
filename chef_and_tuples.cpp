#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        vector<ll> divisors;
        cin >> n >> a >> b >> c;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                if (i != (n / i))
                    divisors.push_back(n / i);
            }
        }
        ll cnt = 0;

        for (int i = 0; i < divisors.size(); i++)
        {
            for (int j = 0; j < divisors.size(); j++)
            {
                if ((divisors[i] <= a) && (divisors[j] <= b) && !(n % (divisors[i] * divisors[j])) && (n / (divisors[i] * divisors[j])) <= c)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}