#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], freq[N] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = 0, like = 0;

        for (int i = 0; i < n; i++)
        {
            like = max(like, a[i]);
        }

        if (freq[like] == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == like)
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        else
        {
            int tt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == like and b[i] > tt)
                {
                    ans = i + 1;
                    tt = b[i];
                }
            }
        }

        cout << ans << "\n";
    }
}