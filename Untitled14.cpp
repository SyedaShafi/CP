#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

const int X = 55;
bool is_computed[X];
int f[N];

int linear_search(int i, int n, int *a, int value)
{
    if (i == n)
        return -1;
    if (a[i] == value)
        return i;
    return linear_search(i + 1, n, a, value);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q, value, rt;
    cin >> q;
    while (q--)
    {
        cin >> value;
        rt = linear_search(0, n, a, value);
        if (rt == -1)
            cout << "Not found\n";
        else
            cout << rt << endl;
    }
}