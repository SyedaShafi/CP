#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 1;
int factor[N];
int arr[11][N];
int main()
{
    int temp;
    for (int i = 2; i <= N; i++)
    {
        temp = i;
        for (int j = 2; j * j <= temp; j++)
        {
            if (temp % j == 0)
            {
                while (temp % j == 0)
                    temp /= j;
                factor[i]++;
            }
        }
        if (temp > 1)
            factor[i]++;
    }
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (factor[j] == i)
            {
                arr[i][j] = arr[i][j - 1] + 1;
            }
            else
            {
                arr[i][j] = arr[i][j - 1];
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (n == 0 && a == 1)
            cout << 1 << "\n";
        else
            cout << arr[n][b] - arr[n][a-1] << endl;
    }
}