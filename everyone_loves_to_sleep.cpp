#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M, cur, init, h, m, mn = INT_MAX, diff;
        cin >> n >> H >> M;
        init = H * 60 + M;
        for (int i = 1; i <= n; i++)
        {
            cin >> h >> m;
            cur = h * 60 + m;
            diff = cur - init;
            if (diff < 0)
                diff = cur + (1440 - init);

            mn = min(mn, diff);
        }
        cout << mn / 60 << " " << mn % 60 << endl;
    }
}