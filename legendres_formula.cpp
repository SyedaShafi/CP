// Given an integer n and a prime number p,
// find the largest x such that p^x divides n!.
#include <bits/stdc++.h>
using namespace std;
int legendres(long long n, long long p)
{
    int ans = 0;
    while (n)
    {
        ans += n / p;
        n /= p;
    }
    return ans;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << legendres(n, p) << endl;
}