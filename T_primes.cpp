#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 7;
vector<bool> isPrime(N, 1);
int main()
{
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    ll a[n];
    ll temp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        temp = (ll)sqrt(a[i]);
        if (isPrime[temp] && (temp * temp == a[i]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}