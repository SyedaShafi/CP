#include <bits/stdc++.h>
#define N 100001
using namespace std;
bool mark[N];
int v_cnt[N];
void sieve()
{
    for (int i = 2; 1LL * i * i <= N; i++)
    {
        if (!mark[i])
        {
            v_cnt[i] = 1;
            for (int j = 1LL * i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
    }
}