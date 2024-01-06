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
        int m;
        cin >> m;
        vector<vector<char>> v(2, vector<char>(m));
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        bool row1 = true, row2 = true;
        for (int i = 0; i < m; i++)
        {
            if (v[0][i] == 'B' && v[1][i] == 'B')
                swap(row1, row2);
            else if (v[0][i] == 'B')
                row2 = false;
            else if (v[1][i] == 'B')
                row1 = false;
            else if (v[0][i] == 'W' && v[1][i] == 'W')
            {
                row1 = false;
                row2 = false;
            }
        }

        if (row1 == false and row2 == false)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}