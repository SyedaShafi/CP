#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int mn = 1, mx = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            mn++;
        }
        else
            break;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] == a[i - 1])
        {
            mx++;
        }
        else
            break;
    }
    cout << a[n - 1] - a[0] << " ";
    if (mn == n)
        cout << (1LL * n * (n - 1)) / 2 << "\n";
    else
        cout << 1LL * mn * mx << "\n";
}