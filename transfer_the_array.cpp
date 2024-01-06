#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int a[n], b[n], gcdb = 0, gcda = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            gcda = __gcd(gcda, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            gcdb = __gcd(gcdb, b[i]);
        }
        sort(a, a + n);
        sort(b, b + n);
        int temp = 0;
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            temp = max(a[i], b[i]) % min(a[i], b[i]);
            if (temp != 0)
            {
                f = false;
                break;
            }
        }
        cout << "Case " << k << ": "
             << "Yes ";
        if (f)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}