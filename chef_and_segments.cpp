#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int a[n + 3];
    int freq_a[n + 3] = {1};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq_a[i] = (freq_a[i - 1] * a[i]) % N;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, m;
        cin >> l >> r >> m;
        int temp = freq_a[r] / freq_a[l - 1];
        cout << (temp % m) << "\n";
    }
}