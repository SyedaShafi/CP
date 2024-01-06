#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a <= b)
            cout << (n % a == 0 ? n / a : (n / a) + 1) << "\n";
        else
            cout << 1 << endl;
    }
}