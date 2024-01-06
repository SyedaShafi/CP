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
        int i, j, k, m;
        for (i = 1; i < n; i++)
        {
            for (j = 1; j <= i; j++)
                cout << "*";
            for (k = i + 1; k <= ((n * 2) - i); k++)
                cout << "#";
            for (m = ((n * 2) - i + 1); m <= n * 2; m++)
                cout << "*";
            cout << endl;
        }
        for (i = 1; i <= n * 2; i++)
            cout << "*";
        cout << endl;
    }
}