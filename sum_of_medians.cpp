#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll temp = n * k;
        ll a[temp + 2];
        for (int i = temp; i > 0; i--)
            cin >> a[i];
        ll index = (n / 2) + 1;
        ll sum = 0, itr = index;
        while (k--)
        {
            sum += a[itr];
            itr += index;
        }
        cout << sum << endl;
    }
}