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
        int n, f = 0;
        cin >> n;
        int a[n], last;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
                }
        int no_of_bits, temp;
        cout << n << "\n";

        for (int i = 0; i < n; i++)
        {
            no_of_bits = log2(a[i]) + 1;
            temp = pow(2, no_of_bits);
            cout << i + 1 << " " << temp - a[i] << "\n";
        }
    }
}