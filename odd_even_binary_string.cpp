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
        int a[n], zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else
                one++;
        }
        if (zero % 2 != 0)
            cout << "NO\n";

        else
            cout << "YES\n";
    }
}