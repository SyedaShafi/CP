#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, cnt = 1;
        cin >> x;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 3; i++)
        {
            if (a[x - 1] != 0)
            {
                cnt++;
                x = a[x - 1];
            }
        }

        if (cnt == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}