#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 1;
bool isPrime(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << "\n";
    }
    else if (n > 2 && n % 2 == 0)
        cout << 2 << "\n";
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << "\n";
        }
        else
            cout << 3 << "\n";
    }
}