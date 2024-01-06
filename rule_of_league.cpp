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
        int n, x, y, cnt = 0;
        cin >> n >> x >> y;
        int games = n - 1;
        int mx = max(x, y);
        int mn = min(x, y);
        if (x == y || (games % mx != 0) || mn != 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            int ele = 2;
            for (int i = 0; i < n - 1; i++)
            {
                cout << ele << " ";
                cnt++;
                if (cnt == mx)
                {
                    ele += mx;
                    cnt = 0;
                }
            }
            cout << "\n";
        }
    }
}