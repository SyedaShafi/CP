// You are given an array of positive and/or negative integers
// and a value K . The task is to find count of all sub-arrays whose
// sum is divisible by K?
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int ans = 0;
    int m[k] = {0};
    m[0] = 1;
    int rem = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        rem = sum % k;
        if (rem < 0)
            rem += k;
        if (m[rem] != 0)
            ans += m[rem];
        m[rem]++;
    }
    cout << ans << endl;
}