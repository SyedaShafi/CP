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
        int n, index = -1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0 && index == -1)
                index = i;
        }
        if (a[n - 1] == 1)
            a[n - 1] = 0;
        else if (a[index] == 0)
            a[index] = 1;
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && cnt >= 0)
                ans += cnt;
            else
                cnt--;
        }
        cout << ans << endl;
    }
}