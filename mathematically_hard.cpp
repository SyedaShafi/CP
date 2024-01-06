#include <bits/stdc++.h>
using namespace std;
const int N = 5e6;
bool mark[N + 3];
unsigned long long phi[N + 3];
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= N; i++)        phi[i] = i;

    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
        {
            for (int j = i; j <= N; j += i)
            {
                mark[j] = 1;
                phi[j] = (phi[j] / i) * (i - 1);
            }
        }
        phi[i] = phi[i] * phi[i];
        phi[i] += phi[i - 1];
    }
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << phi[b] - phi[a - 1] << endl;
    }
}