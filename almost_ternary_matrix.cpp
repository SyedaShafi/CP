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
        int n, m;
        cin >> n >> m;
        int a[n][m] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            a[i][i] = 1;
        }
        int j = m - 1;
        for (int i = 0; i < n; i++)
        {
            a[i][j] = 1;
            j--;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}