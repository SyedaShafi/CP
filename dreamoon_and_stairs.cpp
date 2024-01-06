#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, m;
    cin >> n >> m;
    int temp = n / 2;
    int move = (n + 1) / 2;
    if (move % m == 0)
    {
        cout << move << "\n";
    }
    else
    {
        bool ok = false;
        while (temp != 0)
        {
            move--;
            temp--;
            move += 2;
            if (move % m == 0)
            {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << move << "\n";
        else
            cout << -1 << "\n";
    }
}