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
        int n, m;
        cin >> n >> m;
        if (n == 1 or m == 1)
            cout << 1 << " " << 1 << "\n";
        else
            cout << 2 << " " << 2 << "\n";
    }
}