#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
bool f[N + 1];
int arr[N + 1];
int main()
{
    f[0] = true;
    f[1] = true;
    int temp, d = 10;
    for (int i = 2; (i * i) <= N; i++)
    {
        for (int j = (i * i); j <= N; j += i)
        {
            if (!f[j])
                f[j] = true;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (!f[i])
        {
            temp = i;
            d = 10;
            while (temp > 0)
            {
                if (f[(i % d)])
                {
                    f[i] = true;
                    break;
                }
                temp /= 10;
                d = d * 10;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (!f[i])
        {
            temp = i;
            while (temp > 0)
            {
                if (temp % 10 == 0)
                {
                    f[i] = true;
                    break;
                }
                temp /= 10;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (!f[i])
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
}