#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l = 0, r = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0;
        while (i < n - 1 && v[i] <= v[i + 1])
        {
            i++;
        }
        while (i < n - 1 && v[i] >= v[i + 1])
        {
            i++;
        }

        cout << (i == n - 1 ? "YES\n" : "NO\n");
    }
}