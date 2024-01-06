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
        if (n % 2 == 0)
        {
            if (k % n == 0)
                cout << n << "\n";
            else
                cout << k % n << "\n";
        }
        else
        {
            int mid = n / 2;
            int tms = (k / mid);
            if (k % mid == 0)
                tms--;
            ll hour = k + tms;
            // cout << "Hours :" << hour << "\n";
            if (hour % n == 0)
                cout << n << "\n";
            else
                cout << hour % n << "\n";
        }
    }
}
