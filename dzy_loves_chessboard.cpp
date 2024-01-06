#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, m;
    cin >> n >> m;
    char ans[n][m];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (j % 2 == 0)
                {
                    ans[i][j] = 'W';
                }
                else
                {
                    ans[i][j] = 'B';
                }
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (j % 2 == 0)
                {
                    ans[i][j] = 'B';
                }
                else
                {
                    ans[i][j] = 'W';
                }
            }
        }
    }
    char x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            if (x == '-')
            {
                ans[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << "\n";
    }
}