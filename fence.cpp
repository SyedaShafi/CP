#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e8 + 1;
const int M = 1e6 + 1;
int a[M];
vector<int> pre(M);
void presum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int mn = N, sum = 0, index = -1;
    pre.clear();
    presum(n);
    for (int i = 1; i <= n - k + 1; i++)
    {
        sum = pre[k + i - 1] - pre[i - 1];
        // cout << sum << "\n";
        if (mn > sum)
        {
            index = i;
            mn = sum;
        }
    }
    cout << index << "\n";
}