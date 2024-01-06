#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, k = 0, flag = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                while (i != n)
                {
                    if (a[i] == 0)
                    {
                        flag = 0;
                        break;
                    }
                    else if (a[i] != 0)
                    {
                        k++;
                        flag = 1;
                    }
                    i++;
                }
            }
            if (flag == 0)
                break;
            else
                continue;
        }

        sort(a, a + n);
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                m++;
        }

        if (cnt == n)
            cout << 0 << endl;
        else if (flag == 1 || k == m)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}