#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ele, cnt = 0;
        cin >> n;
        vector<int> v;
        vector<int> lv;
        int a[n + 2] = {0};
        int b[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v.push_back(ele);
            a[ele]++;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] <= v[i])
                cnt++;
        }
        if (cnt == n - 1)
            cout << 0 << "\n";
        else
        {
            int k = n - 1;
            int index = 0, sz, f = 0;
            lv.push_back(v[k]);
            b[v[k]]++;
            k--;
            while (v[k + 1] >= v[k] && k >= 0)
            {
                lv.push_back(v[k]);
                b[v[k]]++;
                k--;
            }
            sz = v.size() - lv.size();
            sort(lv.begin(), lv.end());
            // cout << "lv size " << lv.size() << "\n";
            // cout << "ele in lv ";
            for (int i = lv.size() - 1; i >= 0; i--)
            {
                // cout << lv[i] << " ";
                if (b[lv[i]] != a[lv[i]])
                {
                    index = i;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                index = sz - 1;
            else
                index += sz;

            // cout << "Index :" << index << "\n";

            int ans = 0;
            int arr[n + 2] = {0};

            for (int i = 0; i <= index; i++)
            {
                arr[v[i]]++;
            }

            for (int i = 1; i <= n; i++)
                if (arr[i] != 0)
                    ans++;

            cout << ans << "\n";
        }
    }
}