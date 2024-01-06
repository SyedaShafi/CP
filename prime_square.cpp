#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
const int mod = 1e9 + 7;
int state[N];
int main()
{
    // vector<bool> isPrime(109, 1);
    // for (int i = 2; i < 109; i++)
    // {
    //     for (int j = 2 * i; j < 109; j += i)
    //     {
    //         isPrime[j] = false;
    //     }
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int n, j;
        cin >> n;
        int a[n][n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                a[i][j] = 0;
        }

        j = 0;
        for (int i = 0; i < n; i++)
        {
            a[i][j] = 1;
            j++;
        }

        j = n - 1;
        for (int i = 0; i < n; i++)
        {
            a[i][j] = 1;
            j--;
        }

        if (n % 2 != 0)
        {
            a[0][n / 2] = 1;
            a[n / 2][0] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}