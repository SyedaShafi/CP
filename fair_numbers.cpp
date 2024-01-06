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
        ll n;
        cin >> n;
        ll digit = 1, temp = n;
        while (1)
        {
            if (temp == 0)
                break;
            digit = temp % 10;
            temp /= 10;
            if ((digit > 0) and (n % digit != 0))
            {
                n++;
                temp = n;
            }
        }

        cout << n << "\n";
    }
}