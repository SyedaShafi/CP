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
        if (n == 1)
            cout << 1 << "\n";
        else if (n % 2 != 0)
            cout << -1 << "\n";
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " " << i - 1<<" ";
            }
            cout << "\n";
        }
    }
}