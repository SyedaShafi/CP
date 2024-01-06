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
        sort(a, a + n);
        bool flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}