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
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int current_pl = 0;
        int ans = 0;
        for (int s = 2; s <= n * 2; s++)
        {
            current_pl = 0;
            int i = 0, j = n - 1;
            while (i < j)
            {
                if (a[i] + a[j] == s)
                {
                    current_pl++;
                    i++, j--;
                }
                else if (a[i] + a[j] > s)
                    j--;
                else if (a[i] + a[j] < s)
                    i++;
            }
            ans = max(ans, current_pl);
        }

        cout << ans << "\n";
    }
}