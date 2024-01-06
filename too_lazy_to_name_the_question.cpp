#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a, b, c, cnt = 0, step;
    cin >> a >> b >> c;
    int num1 = min(a, b);
    while (cnt != c)
    {
        if (num1 % a == 0 || num1 % b == 0)
            cnt++;
        num1++;
    }
    num1--;
    if ((num1) % a == 0 && (num1) % b == 0)
        step = ((a * b) / __gcd(a, b));
    else if ((num1) % a == 0)
        step = a;
    else
        step = b;
    while (true)
    {
        cout << num1 << " ";
        num1 -= step;
        if (num1 < 0)
            break;
    }
    cout << endl;
}