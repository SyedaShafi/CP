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
        int a[n + 2];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int j = n, i = 1, cnt = 0;
        while (i < j)
        {
            if (a[i] == 1 && a[j] == 0)
            {
                i++;
                j--;
                cnt++;
            }
            else if (a[i] == 1 && a[j] == 1)
            {
                j--;
            }
            else if (a[i] == 0 && a[j] == 0)
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        cout << cnt << endl;
    }
}