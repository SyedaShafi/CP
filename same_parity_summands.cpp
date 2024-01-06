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
        int n, k;
        cin >> n >> k;
        bool odd = false, even = false;
        if (n < k)
        {
            cout << "NO\n";
            continue;
        }
        int temp1 = n - k + 1;
        int temp2 = n - (2 * (k - 1));
        if (temp1 > 0 and temp1 % 2 != 0)
        {
            odd = true;
        }
        else if (temp2 > 0 and temp2 % 2 == 0)
        {
            even = true;
        }
        if (odd)
        {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
                cout << 1 << " ";
            cout << temp1 << "\n";
        }
        else if (even)
        {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
            }
            cout << temp2 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}