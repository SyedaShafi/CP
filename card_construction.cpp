#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
const int P = 1e9 + 9;
ll h[N];

int main()
{
    h[1] = 2;
    for (int i = 2; i <= N; i++)
    {
        h[i] = h[i - 1] + (1LL * i * 2) + (i - 1);
        if (h[i] > P)
            break;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        int i = 1;
        while (true)
        {
            if (n == 0 || n == 1)
                break;
            if (h[i] == n)
            {
                cnt++;
                n -= h[i];
                i = 1;
            }
            else if (h[i] < n and h[i + 1] > n)
            {
                cnt++;
                n -= h[i];
                i = 1;
            }
            else
            {
                i++;
            }
        }
        cout << cnt << "\n";
    }
}