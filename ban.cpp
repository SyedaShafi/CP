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
        if (n % 2 == 0)
            cout << n / 2 << "\n";
        else
            cout << (n / 2) + 1 << "\n";
        int temp = 3 * n;
        int i = 1, j = temp;
        while (i < j)
        {
            cout << i << " " << j << "\n";
            i += 3;
            j -= 3;
        }
    }
}