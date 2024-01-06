#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    int len = (n * 2) - 1;
    int a[len][len], i, temp = len, k = 0, j;
    a[len / 2][len / 2] = 1;
    while (n != 1)
    {
        for (i = k; i < temp; i++)
        {
            a[i][k] = n;
            a[i][temp - 1] = n;
        }
        for (i = k + 1; i < temp - 1; i++)
        {
            a[k][i] = n;
            a[temp - 1][i] = n;
        }
        n--;
        temp--;
        k++;
    }

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}