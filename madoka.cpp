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
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        char v[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                v[i][j] = '.';

        v[r - 1][c - 1] = 'X';

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //         cout << v[i][j] << " ";
        //     cout << "\n";
        // }
        int row = r - 1, col = c - 1;
        while (row >= 0)
        {
            for (int i = col; i < n; i += k)
                v[row][i] = 'X';
            for (int j = col; j >= 0; j -= k)
                v[row][j] = 'X';
            row--;
            col++;
            if (col >= n)
                col = 0;
        }
        row = r - 1;
        col = c - 1;
        while (row < n)
        {
            for (int i = col; i < n; i += k)
                v[row][i] = 'X';
            for (int j = col; j >= 0; j -= k)
                v[row][j] = 'X';
            row++;
            col--;
            if (col < 0)
                col = n - 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << v[i][j];
            cout << "\n";
        }
    }
}