#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, element, mx, ans = 0;
        cin >> n >> k;
        multiset<int> s;
        for (i = 0; i < n; i++)
        {
            cin >> element;
            s.insert(element);
        }
        mx = 0;
        while (k != 0)
        {
            if (!(s.find(mx) != s.end()))
            {
                s.insert(mx);
                k--;
            }
            mx++;
        }

        while (s.find(ans) != s.end())
        {
            ans++;
        }
        cout << ans << endl;
        // for (auto i : s)
        //     cout<< i << endl;
    }
}