#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll a_x, b_x;

        if ((a * d) > 0)
            a_x = (b * c) % (a * d);

        if ((b * c) > 0)
            b_x = (a * d) % (b * c);

        if ((b * c) == (d * a))

            cout << 0 << endl;

        else if (a_x == 0 || b_x == 0)
        {
            cout << 1 << endl;
        }

        else
            cout << 2 << endl;
    }
}