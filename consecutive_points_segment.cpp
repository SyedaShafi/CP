#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0, cnt3 = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if ((abs(a[i] - a[i + 1]) > 3))
            {
                flag = 0;
                break;
            }
            else if (abs(a[i] - a[i + 1]) == 2)
            {
                cnt++;
            }
            else if (abs(a[i] - a[i + 1]) == 3)
            {
                cnt3++;
            }
        }

        if ((cnt3 >= 1 && cnt != 0) || (cnt > 2) || (cnt3 > 1))
        {
            flag = 0;
        }

        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}