#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int a[n], c_a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            c_a[i] = a[i];
        }

        sort(c_a, c_a + n);
        int j = n - 1, cnt = 0;
        while (j != -1)
        {
            if (c_a[j] >= m)
                cnt++;
            else if (cnt >= x)
            {
                break;
            }
            else
            {
                cnt = x;
                break;
            }
            j--;
        }

        int i_a[cnt], k = 0;
        for (j = n - 1; j >= n - cnt; j--)
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] == c_a[j])
                {
                    i_a[k] = i;
                    k++;
                    break;
                }
            }
        }
        sort(i_a, i_a + cnt);

        cout << cnt << " ";
        for (i = 0; i < cnt; i++)
            cout << i_a[i] + 1 << " ";
        cout << endl;
    }
}