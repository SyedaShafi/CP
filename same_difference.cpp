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
        int ele, cnt = 1;
        vector<int> diff;
        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            diff.push_back(ele - i);
        }
        sort(diff.begin(), diff.end());

        ll ans = 0;
        for (int i = 1; i < diff.size(); i++)
        {
            if (diff[i] != diff[i - 1])
            {
                ans += (1LL * cnt * (cnt - 1)) / 2;
                cnt = 1;
            }
            else if (diff[i] == diff[i - 1])
            {
                cnt++;
            }
        }
        if (cnt > 1)
            ans += (1LL * cnt * (cnt - 1)) / 2;
        cout << ans << "\n";
    }
}