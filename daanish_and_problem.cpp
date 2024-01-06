#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10], i, k, cnt = 0;
        for (i = 0; i < 10; i++)
            cin >> a[i];
        cin >> k;
        for (i = 9; i >= 0; i--)
        {
            if (k >= a[i])
            {
                k = k - a[i];
                a[i] = 0;
            }
        }
        for (i = 0; i < 10; i++)
        {
            if (a[i] != 0)
                cnt = i + 1;
        }

        cout << cnt << endl;
    }
}