#include <bits/stdc++.h>
using namespace std;

int digit_sum(long long int n1)
{
    if (n1 == 0)
        return 0;
    return digit_sum(n1 / 10) + (n1 % 10);
}

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int d_sum, super_digit;

    d_sum = digit_sum(n) * k;
    while (super_digit / 10 != 0)
    {
        super_digit = digit_sum(d_sum);
        d_sum = super_digit;
    }

    cout << super_digit << endl;
}