#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], j, i, x, y;
        cin >> x >> y;
        for (j = 0; j < n; j++)
        {
            int num_of_p = 0, num_of_u = 0, num_of_f = 0;
            string str;
            cin >> str;
            for (i = 0; i < m; i++)
            {
                if (str[i] == 'P')
                    num_of_p++;
                else if (str[i] == 'U')
                    num_of_u++;
                else if (str[i] == 'F')
                    num_of_f++;
            }

            if ((num_of_f >= x) || ((num_of_f == x - 1) && (num_of_p >= y)))
                a[j] = 1;
            else
                a[j] = 0;
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}