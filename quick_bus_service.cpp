#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    int m;
    cin >> m;

    ll cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < m)
            cnt++;
        else if (sum == m)
        {
            cnt++;
            break;
        }
        else if (sum > m)
        {
            cnt++;
            break;
        }
    }
    if (m == 0)
        cnt = 0;
    if (cnt > n)
        cout << n << "\n";
    else
        cout << cnt << "\n";
}