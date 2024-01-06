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
        int m, s;
        cin >> m >> s;
        int a[m];
        int temp = 1, sum = 0, i = 0, t_sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum += s;
        sort(a, a + m);
        temp = a[m - 1];
        t_sum = (temp * (temp + 1)) / 2;
        if (sum == t_sum)
            cout << "YES\n";
        else
        {
            while (t_sum < sum)
            {
                temp++;
                t_sum += temp;
            }
            if (t_sum == sum)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}