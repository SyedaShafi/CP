#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        cout << "Case " << cs << ": ";
        cs++;
        cout << (n / 2) * m << endl;
        
    }
}