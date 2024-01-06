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
        int n, a, b;
        cin >> n >> a >> b;
        if ((n - max(a,b)) > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}