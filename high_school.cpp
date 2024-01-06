#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    double x, y;
    cin >> x >> y;
    if ((y * log(x)) > (x * log(y)))
        cout << ">\n";
    else if ((y * log(x)) < (x * log(y)))
        cout << "<\n";
    else
        cout << "=\n";
}