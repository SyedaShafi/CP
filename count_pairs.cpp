// Given an array a and positive integer k ,
// the task is to count the total number of pairs
// in the array whose sum is divisible by k.
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
    int m[k] = {0};
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = a[i] % k;
        if (rem != 0)
        {
            ans += m[k - rem];
        }
        else
        {
            ans += m[0];
        }
        m[rem]++;
    }
    cout << ans << endl; 
}