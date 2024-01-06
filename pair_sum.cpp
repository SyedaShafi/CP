#include <bits/stdc++.h>
using namespace std;
const int N = (1e6 + 10) * 2;
int freq_a[N];
int a[N];
int main()
{
    int n, k, i, diff, flag = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        freq_a[a[i]]++;
    }

    for (i = 0; i < n; i++)
    {
        diff = abs(k - a[i]);
        if (diff == a[i] && freq_a[diff] > 1)
        {
            flag = 1;
            break;
        }
        else if ((freq_a[diff] != 0) && diff != a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}