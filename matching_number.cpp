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
        int a[(2 * n) + 2];
        for (int i = 1; i <= 2 * n; i++)
            a[i] = i;
        if (n % 2 == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << 1 << " " << 2 * n << "\n";
            int temp = 1 + (2 * n);
            int cnt = 0;
            int i = 2;
            while (cnt != n / 2)
            {
                temp--;
                cnt++;
                cout << i << " " << temp - i << "\n";
                i++;
            }
            temp = 1 + (2 * n);
            cnt = 0;
            i = n;
            while (cnt != n / 2)
            {
                temp++;
                cnt++;
                cout << i << " " << temp - i << "\n";
                i--;
            }
        }
    }
}