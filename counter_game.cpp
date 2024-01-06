#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll n;
    cin >> n;
    ll cnt = 0, temp, no_of_bits, t = n;
    while (n != 1)
    {
        cout << "N :::" << n << endl;
        if ((n & (n - 1)) == 0)
        {
            no_of_bits = log2(n) + 1;
            cout << "no of bits :" << no_of_bits << endl;
            cnt += no_of_bits - 1;
            break;
        }
        else
        {
            no_of_bits = log2(n) + 1;
            cout << "no of bits :" << no_of_bits << endl;
            temp = 1 << (no_of_bits - 1);
            cout << "TEmp :" << temp << endl;
            n = n - temp;
            cnt++;
        }
    }
    if (cnt % 2 == 0 && t != 1)
    {
        cout << "Richard\n";
    }
    else
    {
        cout << "Louise\n";
    }
}