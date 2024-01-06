#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int hash[N] = {0}, i;
    for (i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hash[x];
        cout << endl;
    }
}