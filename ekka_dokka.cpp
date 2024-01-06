#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll w;
        cin >> w;
        ll temp = 2;
        cout << "Case " << cs << ": ";
        cs++;
        if (w % 2 != 0)
        {
            cout << "Impossible\n";
        }
        else
        {
            w /= temp;
            while (w % 2 == 0)
            {
                w /= 2;
                temp *= 2;
            }
            cout << w << " " << temp << "\n";
        }
    }
}