#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a + n);
        int cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                cnt++;
            else
                break;
        }

        if (cnt == n)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}