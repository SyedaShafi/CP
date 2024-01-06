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
        int i = 0, j = n - 1;
        int mn = 0, prev = -1;
        while (i <= j)
        {
            // cout << mn << "\n";
            // cout << i << " | " << j << "\n";
            if (i == j)
                break;
            if (mn <= (min(a[i], a[j])))
            {
                if (a[i] < a[j])
                {
                    mn = a[i];
                    i++;
                }
                else if (a[i] > a[j])
                {
                    mn = a[j];
                    j--;
                }
                else if (a[i] == a[j])
                {
                    mn = a[j];
                    j--;
                }
            }
            else
            {

                mn = 0;
                j = n - 1;
                if (prev == i)
                {
                    i++;
                    prev = -1;
                }
                prev = i;
                ans = i;
                // cout << i << " " << j << " " << mn << "\n";
                // cout << "reset\n";
            }
        }
        // cout << "test\n";
        cout << ans << "\n";
    }
}