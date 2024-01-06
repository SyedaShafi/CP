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
        vector<pair<int, int>> v;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v.push_back({ele, i});
        }
        sort(v.begin(), v.end());
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            b.push_back(ele);
        }
        sort(b.begin(), b.end());
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[v[i].second] = b[i];
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}