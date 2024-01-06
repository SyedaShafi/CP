#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s1, s2, d;
        cin >> n >> m >> s1 >> s2 >> d;
        int flag = 0;

        // int len_left = s2 - 1;
        // int len_right = m - s2;
        // int len_down = n - s1;
        // int len_up = s1 - 1;

        int L, R, U, D;
        L = s2 - d;
        R = s2 + d;
        U = s1 - d;
        D = s1 + d;

        int diff_r = m - R;
        int diff_u = U - 1;
        int diff_l = L - 1;
        int diff_d = n - D;

        if (diff_u > 0 && diff_r > 0)
            flag = 1;
        else if (diff_l > 0 && diff_d > 0)
            flag = 1;
        // if ((diff_u <= 0 || diff_r <= 0) || (diff_l <= 0 || diff_d <= 0) || (diff_u <= 0 || diff_l <= 0))
        //     flag = 0;

        int dist_s = abs(s1 - n) + abs(s2 - m);

        if (dist_s <= d || flag == 0)
            cout << -1 << endl;
        else
            cout << abs(1 - n) + abs(1 - m) << endl;
    }
}