#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
bool mark[N];
bool is_prime[N];
vector<ll> primes;
vector<ll> num_of_divisors;
int main()
{
    for (ll i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
                mark[j] = true;
        }
    }
    for (ll i = 2; i <= N; i++)
    {
        if (!mark[i])
        {
            primes.push_back(i);
            is_prime[i] = true;
        }
    }

    ll cnt, ans, temp, prime_factors = 0;
    // num_of_divisors.push_back(1);

    for (ll i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            // num_of_divisors.push_back(2);
            continue;
        }
        else
        {
            ans = 1;
            temp = i;
            for (ll j = 0; j < primes.size() && primes[j] * primes[j] <= temp; j++)
            {
                if (temp % primes[j] == 0)
                {
                    cnt = 0;
                    while (temp % primes[j] == 0)
                    {
                        cnt++;
                        temp /= primes[j];
                    }
                    ans *= (cnt + 1);
                }
            }
            if (temp > 1)
            {
                ans *= 2;
            }
            // cout << "NUmber of divisors of " << i << " is " << ans << "\n";
            bool flag = 0;
            if (!is_prime[ans])
            {

                for (ll j = 0; j < primes.size() && primes[j] * primes[j] <= ans; j++)
                {
                    if (ans % primes[j] == 0)
                    {
                        if (is_prime[ans / primes[j]] && (ans / primes[j] != primes[j]))
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                // if (ans > 1)
                // {
                //     prime_factors++;
                // }
                // cout << " no of prime factors " << prime_factors << endl;
                if (flag)
                    num_of_divisors.push_back(i);
            }
        }
    }

    for (ll i = 8; i < num_of_divisors.size(); i += 9)
        cout << num_of_divisors[i] << "\n";
}