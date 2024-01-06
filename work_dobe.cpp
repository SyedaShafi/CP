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

        int x, d1, d2;
        cin >> x >> d1 >> d2;
        int temp = (x * d1);

        cout << ceil(temp / (d2 * 1.0)) << "\n";
    }
}