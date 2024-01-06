#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int cs = 0;
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 and m == 0)
            break;
        cs++;
        if (n == 1 and m == 1)
            cout << "Case " << cs << ": Even.\n";
        else if (n == 1 || m == 1)
            cout << "Case " << cs << ": Odd.\n";
        else
            cout << "Case " << cs << ": Even.\n";
    }
}