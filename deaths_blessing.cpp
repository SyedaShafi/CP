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
        ll ele, mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            ans += ele;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            ans += ele;
            mx = max(ele, mx);
        }
        cout << ans - mx << "\n";
    }
}