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
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        if (x1 == x2 && (y3 == (max(y1, y2)) || y3 == (min(y1, y2))))
            cout << "NO\n";
        else if (x2 == x3 && (y1 == (max(y3, y2)) || y1 == (min(y3, y2))))
            cout << "NO\n";
        else if (x1 == x3 && (y2 == (max(y1, y3)) || y2 == (min(y1, y3))))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}