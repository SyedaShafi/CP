
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 0 and m != 0)
        cout << "Impossible\n";
    else if (m == 0)
        cout << n << " " << n << "\n";
    else if (n == m)
        cout << m << " " << n + m - 1 << "\n";
    else if (m > n)
    {
        int per_person = (m / n);
        if (m % n == 0)
        {
            cout << per_person * n << " " << n + m - 1 << "\n";
        }
        else
        {
            cout << (per_person * (n - 1)) + ((m % n) + per_person) << " " << n + m - 1 << "\n";
        }
    }
    else
    {
        cout << n << " " << n + m - 1 << "\n";
    }
}