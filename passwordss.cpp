#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ele;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
        }
        int temp = 10 - n;
        int ncr = nCr(temp, 2);
        cout << ncr * 6 << endl;
    }
}