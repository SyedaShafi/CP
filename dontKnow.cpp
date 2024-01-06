#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 2e9 + 9;
int bs(int *a, int n, int l, int r, int ele)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == ele)
            return mid;
        else if (a[mid] < ele)
            l = mid + 1;
        else if (a[mid] > ele)
            r = mid - 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, k, f = 0, ans;
        cin >> n >> s >> k;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a, a + k);

        int res = bs(a, k, 0, k - 1, s);
        // cout << "res " << res << "\n";

        if (res == -1)
            cout << 0 << "\n";

        else
        {

            int temp1 = a[res] + 1;
            int temp2 = a[res] - 1;
            // cout << temp1 << " " << temp2 << "\n";

            while (1)
            {
                int itr = bs(a, k, res, k - 1, temp1);
                if (itr != -1 and temp1 <= n)
                    temp1++;
                else
                    break;
            }
            // cout << "temp1 ::" << temp1 << "\n";
            while (1)
            {
                int itr = bs(a, k, 0, res, temp2);
                if (itr != -1 and temp2 > 0)
                    temp2--;
                else
                    break;
            }
            // cout << "temp2 :::" << temp2 << "\n";

            if (temp2 <= 0)
                ans = temp1 - a[res];
            else if (temp1 > n)
                ans = a[res] - temp2;
            else
                ans = min(temp1 - a[res], a[res] - temp2);

            cout << ans << "\n";
        }
    }
}