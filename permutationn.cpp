#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }

        int temp[n + 5] = {0};
        int mx = 0, ele, v;

        for (int i = 0; i < n; i++)
        {
            ele = a[i][0];
            temp[ele]++;
        }

        for (int j = 1; j <= n; j++)
        {
            if (mx < temp[j])
            {
                v = j;
                mx = temp[j];
            }
        }
        // for (int i = 1; i < n; i++)
        //     cout << temp[i]<<" ";

        cout << v << " ";

        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != v)
            {
                index = i;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << a[index][i] << " ";
        }
        cout << "\n";
    }
}