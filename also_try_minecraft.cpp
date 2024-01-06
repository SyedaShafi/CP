#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
const int N = 1e5 + 6;
int s[N];
int main()
{
    ll n, m, s, t;
    cin >> n >> m;
    ll a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll sum_forward[n] = {0};
    ll sum_backward[n + 1] = {0};

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1])
            sum_forward[i] = sum_forward[i - 1] + (a[i] - a[i + 1]);
        else
            sum_forward[i] = sum_forward[i - 1];
    }
    for (int i = n; i > 1; i--)
    {
        if (a[i] > a[i - 1])
            sum_backward[i - 1] = sum_backward[i] + (a[i] - a[i - 1]);
        else
            sum_backward[i - 1] = sum_backward[i];
    }
    while (m--)
    {
        cin >> s >> t;
        if (s < t)
        {
            // cout << "6 th term : " << sum_forward[t - 1] << endl;
            cout << sum_forward[t - 1] - sum_forward[s - 1] << endl;
        }
        else
        {
            cout << sum_backward[t] - sum_backward[s] << endl;
        }
    }
}