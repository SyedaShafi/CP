#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 9;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    bool isPresent[N] = {false};
    int cnt[n + 2] = {0};
    for (int i = n; i >= 1; i--)
    {
        if (!isPresent[a[i]])
        {
            cnt[i] = cnt[i + 1] + 1;
            isPresent[a[i]] = true;
        }
        else
        {
            cnt[i] = cnt[i + 1];
        }
    }
    // for (int i = 1; i <= n; i++)
    //     cout << cnt[i] << "\n";
    while (m--)
    {
        int l;
        cin >> l;
        cout << cnt[l] << "\n";
    }
}