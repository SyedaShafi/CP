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
        cout << 2 << "\n";
        int prev;
        for (int i = 1; i <= n; i += 2)
        {
            prev = i;
            while (prev <= n)
            {
                cout << prev << " ";
                prev *= 2;
            }
        }
        cout << "\n";
    }
}