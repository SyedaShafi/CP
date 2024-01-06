#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        int n, a, time;
        cin >> n >> a >> time;
        n--;
        time = time - a;
        cout << "Case " << cs << ": ";

        if (n == 1 and time < 0)
        {
            cout << -1 << "\n";
        }

        else if (n == 1 and time > 0)
        {
            cout << time + 1 << "\n";
        }

        else if ((time < 0) and (time % (n - 1) == 0))
        {
            cout << -1 << "\n";
        }

        else
        {
            cout << time / (n - 1) << "\n";
        }
    }
}