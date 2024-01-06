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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i].first;
            temp[i].second = i + 1;
        }
        sort(temp.begin(), temp.end());
        int segment = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << temp[i].first << " " << temp[i].second << "\n";
        // }
        for (int i = 0; i < n - 1; i++)
        {
            // cout << temp[i].second << " " << temp[i + 1].second << "\n";
            if (temp[i].second > temp[i + 1].second || (temp[i + 1].second - temp[i].second > 1))
                segment++;
        }
        // cout << segment << "\n";
        if (segment <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
