#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    if (n % 2)
        cout << n / 2 << "\n";
    else
        cout << (n / 2) - 1 << "\n";
    int ans[n + 2];
    int j = 1;
    for (int i = 2; i <= n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    for (int i = 1; i <= n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}