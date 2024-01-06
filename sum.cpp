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
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        sort(a, a + 3);
        if (a[0] + a[1] == a[2])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}