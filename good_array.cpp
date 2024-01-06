#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] % 2 == 1 and a[i + 1] % 2 == 1)
                ans++;
            else if (a[i] % 2 == 0 and a[i + 1] % 2 == 0)
                ans++;
        }
        cout << ans << "\n";
    }
}