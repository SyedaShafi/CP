#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem, sum = 0;
        cin >> n;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }

        cout << sum << endl;
    }
}