#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int a[n], b[n], sorted_a[n], i, sorted_b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sorted_a[i] = a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            sorted_b[i] = b[i];
        }

        sort(sorted_a, sorted_a + n);
        sort(sorted_b, sorted_b + n);

        vector<pair<int, int>> p_a;

        for (i = 0; i < n; i++)
        {
            auto itr = find(a, a + n, sorted_a[i]);
            int index = distance(a, itr);
            if (index != i)
            {
                p_a.push_back({index, i});
                swap(a[i], a[index]);
            }
            a[i] = -1;
        }

        // for (auto itr = p_a.begin(); itr != p_a.end(); itr++)
        // {
        //     cout << itr->first + 1 << " " << itr->second + 1;
        //     cout << endl;
        // }
        // cout << endl;

        for (auto itr = p_a.begin(); itr != p_a.end(); itr++)
        {
            swap(b[itr->first], b[itr->second]);
        }

        int cnt = 0;

        for (i = 0; i < n; i++)
        {
            if (sorted_b[i] == b[i])
            {
                b[i] = -1;
                cnt++;
            }
        }
        if (cnt != n)
        {
            for (i = 0; i < n; i++)
            {
                if ((b[i] != sorted_b[i]) && (b[i] != -1))
                {
                    auto itr = find(b, b + n, sorted_b[i]);
                    int index = distance(b, itr);
                    if (index == n)
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        if (sorted_a[index] == sorted_a[i])
                        {
                            p_a.push_back({index, i});
                            swap(b[i], b[index]);
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                b[i] = -1;
            }
        }

        if (flag == 0)
        {
            cout << p_a.size() << endl;
            for (auto itr = p_a.begin(); itr != p_a.end(); itr++)
            {
                cout << itr->first + 1 << " " << itr->second + 1;
                cout << endl;
            }
        }
        else if (flag == 1)
            cout << -1 << endl;
    }
}