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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll sum = 0, temp;
        int len = n, ans = n, index = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            len = i + 1;
            temp = 0;
            index = 0;
            flag = 1;
            for (int j = i + 1; j < n; j++)
            {
                temp += a[j];
                index++;
                if (temp == sum)
                {
                    len = max(len, index);
                    index = 0;
                    temp = 0;
                }
                else if (temp > sum)
                {
                    break;
                }
            }
            if ((temp > 0 and temp != sum))
                flag = 0;

            if (flag == 1)
                ans = min(ans, len);
        }
        cout << ans << "\n";
    }
}
