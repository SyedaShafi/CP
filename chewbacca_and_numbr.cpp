#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string x;
    cin >> x;
    if (x[0] != '9' and x[0] > '4')
        x[0] = '9' - x[0] + '0';
    for (int i = 1; i < x.size(); i++)
    {
        if (x[i] > '4')
        {
            x[i] = '9' - x[i] + '0';
        }
    }
    cout << x << "\n";
}