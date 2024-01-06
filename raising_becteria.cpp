#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int x, cnt = 0, temp;
    cin >> x;
    int no_of_bits;
    while (1)
    {
        if (x == 0 || x == 1)
            break;
        no_of_bits = log2(x) + 1;
        temp = pow(2, no_of_bits);
        if (temp > x)
        {
            no_of_bits--;
        }
        x -= (pow(2, no_of_bits));
        // cout << x << " x\n";
        cnt++;
    }
    if (x == 1)
        cout << cnt + 1 << "\n";
    else
        cout << cnt << "\n";
}