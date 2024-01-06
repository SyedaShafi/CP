#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    cin >> a >> b;
    int op = 0;
    if (a == 1 and b == 1)
        op = -1;
    while (true)
    {
        if (a <= 0 || b <= 0)
            break;
        if (a > b)
        {
            b++;
            a -= 2;
        }
        else
        {
            a++;
            b -= 2;
        }
        op++;
    }
    cout << op << "\n";
}