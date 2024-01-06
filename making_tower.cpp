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
        int ele, cnt, dist = 0;
        vector<int> ans[n + 2];

        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            ans[ele].push_back(i);
        }

        for (int i = 1; i <= n; i++)
        {
            if (ans[i].size() <= 1)
                cout << ans[i].size() << " ";
            else
            {
                cnt = 0;
                for (int j = 1; j < ans[i].size(); j++)
                {
                    dist = (ans[i][j] - ans[i][j - 1]) - 1;
                    if ((dist & 1) == 0)
                    {
                        cnt++;
                    }
                }
                cout << cnt + 1 << " ";
            }
        }

        cout << "\n";
    }
}