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
        // int cnt[n + 3] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cnt[a[i]]++;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 2; j < n; j++)
                if (a[i] == a[j])
                    flag = true;
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}