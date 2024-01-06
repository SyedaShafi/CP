#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, i;
    cin >> n;
    for (i = n + 1; i < N; i++)
    {
        if (is_prime(i))
        {
            cout << i << endl;
            break;
        }
    }
}