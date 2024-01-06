#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
int temp[N];
void div(int ele)
{
    for (int i = 1; i * i <= ele; i++)
    {
        if (ele % i == 0)
        {
            temp[ele] = 1;
            if ((ele / i) != i)
                temp[ele / i] = 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        temp[N] = {0};

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        vector<int> v;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == m and temp[m] == 0)
            {
                v.push_back(a[i]);
                div(m);
            }
            m--;
        }

        bool f = true;
        for (int i = 1; i <= m; i++)
        {
            cout << temp[i] << " ";
            // if (temp[i] == 0)
            // {
            //     f = false;
            //     break;
            // }
        }
        cout << "\n";

        // if (f)
        // {
        //     if (v.size() > 1)
        //     {
        //         sort(v.begin(), v.end());
        //         cout << v[v.size() - 1] - v[0] << "\n";
        //     }
        //     else
        //         cout << 0 << "\n";
        // }
        // else
        //     cout << -1 << "\n";
    }
}