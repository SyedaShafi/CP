#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int temp = n+m-2;
        if ((temp % 2) != 0)
            cout << "Burenka\n";
        else
            cout << "Tonya\n";
    }
}