
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        a.push_back(ele);
    }
    int mx = n;
    int ans[n] = {0};
    auto it = minmax_element(a.begin(), a.end());
    int dis_mx = distance(a.begin(), it.first);
    int dis_mn = distance(a.begin(), it.second);
    ans[dis_mn] = 1;
    ans[dis_mx] = n;
    int value = 2;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = value;
            value++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}