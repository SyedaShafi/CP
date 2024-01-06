#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int flag = 1;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
            cin >> d[i];
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = 0;
        a[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            a[i] = d[i] + a[i - 1];
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] - d[i] >= 0 && d[i] > 0)
                flag = 0;
        }
        if (flag == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}