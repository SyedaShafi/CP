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
        vector<int> ans;
        sort(a, a + n, greater<int>());
        int temp = 0;
        ans.push_back(a[0]);
        temp += a[0];
        a[0] = -1;
        int sz = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (temp > a[j] and a[j] != -1)
                {
                    ans.push_back(a[j]);
                    temp += a[j];
                    a[j] = -1;
                    sz++;
                    break;
                }
            }
            if (sz == n)
                break;
        }
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != -1)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
}