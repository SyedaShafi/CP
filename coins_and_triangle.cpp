#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 10;
vector<ll> ans;
int main()
{
    int t;
    cin >> t;
    ll sum = 0, i = 1;
    while (sum <= N)
    {
        sum += i;
        ans.push_back(sum);
        i++;
    }
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; ans[i] <= n; i++)
        {
            cnt++;
        }
        cout << cnt << "\n";
    }
}