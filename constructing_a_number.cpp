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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int digit_sum = 0;
        for (int i = 0; i < n; i++)
        {
            while (a[i] != 0)
            {
                digit_sum += (a[i] % 10);
                a[i] /= 10;
            }
        }
        if (digit_sum % 3 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}