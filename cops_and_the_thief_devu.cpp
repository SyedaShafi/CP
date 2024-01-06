#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y;
        cin >> m >> x >> y;
        int a[m], i, j, dist = x * y, unsafe[101] = {0}, safe = 0;
        for (i = 0; i < m; i++)
            cin >> a[i];

        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i + 1 >= (a[j] - dist) && i + 1 <= (a[j] + dist) && unsafe[i] == 0)
                {
                    unsafe[i] = 1;
                }
            }
        }

        for (i = 0; i < 100; i++)
        {
            if (unsafe[i] == 0)
                safe++;
        }

        cout << safe << endl;
    }
}