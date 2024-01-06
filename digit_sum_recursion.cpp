#include <bits/stdc++.h>
using namespace std;

// **************array sum****************
// int sum(int n, int a[])
// {
//     if (n < 0)
//         return 0;
//     return sum(n - 1, a) + a[n];
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     cout << sum(n - 1, a);
// }

// **********************DIGIT SUM*******************
int digit_sum(int digit, int last_digit)
{
    if (digit / 10 == 0)
        return (digit + last_digit);
    return digit_sum(digit / 10, digit % 10) + last_digit;
}
int main()
{
    int n;
    cin >> n;
    cout<<digit_sum(n / 10, n % 10);
}