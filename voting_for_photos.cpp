#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 9;
map<int, int> cnt;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    // for (int i = 0; i < n; i++)
    //     cout << cnt[a[i]] << "\n";
    // cout << cnt.size() << "\n";
    auto it = max_element(cnt.begin(), cnt.end(), cmp);
    int mx = it->second;
    cnt.clear();
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
        if (cnt[a[i]] == mx)
        {
            cout << a[i] << "\n";
            break;
        }
    }
}