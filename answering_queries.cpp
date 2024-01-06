#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll f(int *a, int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum += a[i] - a[j];
        }
    }

    return sum;
}
int main()
{
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << cs << ": \n";
        cs++;
        int n, q, w, x, y;
        scanf("%d %d", &n, &q);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        while (q--)
        {
            scanf("%d", &w);
            if (w == 1)
                cout << f(a, n) << "\n";
            else
            {
                scanf("%d %d", &x, &y);
                a[x] = y;
            }
        }
    }
}