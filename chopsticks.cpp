#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, d, i, cnt = 0;
    cin >> n >> d;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 0; i + 1 < n; i++)
    {
        if ((a[i + 1] - a[i]) <= d)
        {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
}